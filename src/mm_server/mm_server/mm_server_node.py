import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from mm_interfaces.msg import OculusControllerInfo
from .UR5Wrapper import UR5Wrapper
from .math_utils import *
import numpy as np

class MMServerNode(Node):
	def __init__(self):
		super().__init__('mm_server_node')
		self.get_logger().info('Initialized MM Server')

		# Arm Control
		right_robot_ip = "192.168.2.2"
		left_robot_ip = "192.168.1.2"
		self.initAndResetArms(right_robot_ip, left_robot_ip)
		self.arm_timeout = 0.25
		self.prev_held_right_trigger = False
		self.prev_held_left_trigger = False
		# Current position of the controllers
		self.right_controller_position = np.array([0.,0.,0.,0.,0.,0.])
		self.left_controller_position = np.array([0.,0.,0.,0.,0.,0.])
		# Current controller home position from which end
		# effector deltas are calculated 
		self.right_controller_home = np.array([0.,0.,0.,0.,0.,0.])
		self.left_controller_home = np.array([0.,0.,0.,0.,0.,0.])

		self.right_controller_info_sub = self.create_subscription(
			OculusControllerInfo, '/right_controller_info',
			self.rightControllerCallback, 10)
		self.left_controller_info_sub = self.create_subscription(
			OculusControllerInfo, '/left_controller_info',
			self.leftControllerCallback, 10)
		self.base_vel_pub = self.create_publisher(Twist, '/cmd_vel', 10)

	def initAndResetArms(self, right_robot_ip, left_robot_ip):
		self.right_robot = UR5Wrapper(right_robot_ip)
		self.get_logger().info(
			"MM Server: Right Arm Initialized. Resetting to Initial Position")
		self.left_robot = UR5Wrapper(left_robot_ip)
		self.get_logger().info(
			"MM Server: Left Arm Initialized. Resetting to Initial Position")
		self.right_robot.reset_to_init()
		self.get_logger().info(
			"MM Server: Finished resetting right arm to initial position")
		self.left_robot.reset_to_init()
		self.get_logger().info(
			"MM Server: Finished resetting left arm to initial position")

	def rightControllerCallback(self, msg):
		x = msg.pose.position.x
		y = msg.pose.position.y
		z = msg.pose.position.z
		A = msg.a
		B = msg.b
		RTr = msg.rtr
		RG = msg.rg
		joystick_x = msg.joystick.x
		joystick_y = msg.joystick.y

		self.setNewPosition(x, y, z,
					  is_right_controller=True, is_home_position=False)
		
		# Only consider moving the arm if the trigger is pressed
		if RTr:
			# Set a new home position if this is a new trigger press
			if not self.prev_held_right_trigger:
				self.get_logger().info("MM Server: New Right Trigger")
				self.setNewPosition(x, y, z,
						is_right_controller=True, is_home_position=True)
				self.right_robot.set_home_position()
			
			# Move arm
			delta = self.getControllerDelta(is_right_controller=True)
			delta = convertControllerAxesToUR5(delta)
			self.right_robot.go_to_position(delta, wait=False)

			# Move base translationally
			self.sendTranslationalBaseVelocities(joystick_x, joystick_y)
		else:
			self.right_robot.stop()
		self.prev_held_right_trigger = RTr

	def leftControllerCallback(self, msg):
		x = msg.pose.position.x
		y = msg.pose.position.y
		z = msg.pose.position.z
		X_pressed = msg.x
		Y_pressed = msg.y
		LTr = msg.ltr
		LG = msg.lg
		joystick_x = msg.joystick.x
		joystick_y = msg.joystick.y

		self.setNewPosition(x, y, z,
				is_right_controller=False, is_home_position=False)
		
		# Only consider moving the arm if the trigger is pressed
		if LTr:
			# Set a new home position if this is a new trigger press
			if not self.prev_held_left_trigger:
				self.get_logger().info("MM Server: New Left Trigger")
				self.setNewPosition(x, y, z,
						is_right_controller=False, is_home_position=True)
				self.left_robot.set_home_position()
			
			# Move arm
			delta = self.getControllerDelta(is_right_controller=False)
			delta = convertControllerAxesToUR5(delta)
			self.left_robot.go_to_position(delta, wait=False)

			# Move base rotationally
			self.sendRotationalBaseVelocities(joystick_x, joystick_y)
		else:
			self.left_robot.stop()
		self.prev_held_left_trigger = LTr
	
	def setNewPosition(self, x, y, z, is_right_controller=True, is_home_position=False):
		if is_right_controller:
			if is_home_position:
				self.right_controller_home = np.array([x, y, z, 0., 0., 0.])
			else:
				self.right_controller_position = np.array([x, y, z, 0., 0., 0.])
		else:
			if is_home_position:
				self.left_controller_home = np.array([x, y, z, 0., 0., 0.])
			else:
				self.left_controller_position = np.array([x, y, z, 0., 0., 0.])

	def getControllerDelta(self, is_right_controller=True):
		if is_right_controller:
			return self.right_controller_position - self.right_controller_home
		else:
			return self.left_controller_position - self.left_controller_home
		
	def sendTranslationalBaseVelocities(self, joystick_x, joystick_y):
		base_velocities = convertJoystickValuesToBaseVelocities(
			joystick_x, joystick_y)
		vel = Twist()
		vel.linear.x = base_velocities[0]
		vel.linear.y = base_velocities[1]
		vel.linear.z = 0.0
		self.base_vel_pub.publish(vel)

	def sendRotationalBaseVelocities(self, joystick_x, joystick_y):
		base_velocities = convertJoystickValuesToBaseVelocities(
			joystick_x, joystick_y)
		y_vel = base_velocities[1]
		rotate_right = True if y_vel > 0 else False
		vel = Twist()
		if rotate_right:
			vel.angular.z = y_vel
		else:
			vel.angular.z = y_vel
		self.base_vel_pub.publish(vel)

def main(args=None):
	rclpy.init()
	mm_server_node = MMServerNode()
	rclpy.spin(mm_server_node)

if __name__ == '__main__':
	main()