import rclpy
from rclpy.node import Node
from mm_interfaces.msg import OculusJoystickInfo
from .UR5Wrapper import UR5Wrapper
from .math_utils import convertControllerAxesToUR5
import numpy as np

class MMServerNode(Node):
	def __init__(self):
		super().__init__('mm_server_node')
		self.get_logger().info('Initialized MM Server')

		# Arm Control
		self.right_robot_ip = "192.168.2.2"
		self.arm_timeout = 0.25
		self.right_robot = UR5Wrapper(self.right_robot_ip)
		self.get_logger().info(
			"MM Server: Right Arm Initialized. Resetting to Initial Position")
		self.right_robot.reset_to_init()
		self.get_logger().info(
			"MM Server: Finished resetting right arm to initial position")
		self.prev_held_right_trigger = False
		# Current position of the right controller
		self.right_controller_position = np.array([0.,0.,0.,0.,0.,0.])
		# Current right controller home position from which end
		# effector deltas are calculated 
		self.right_controller_home = np.array([0.,0.,0.,0.,0.,0.])

		self.right_js_info_sub = self.create_subscription(
			OculusJoystickInfo, '/right_js_info', self.jsCallback, 10)


	def jsCallback(self, msg):
		x, y, z, a, b, rtr, rg = self.unwrapOculusJoystickMsg(msg)
		self.setNewPosition(x, y, z,
					  is_right_controller=True, is_home_position=False)
		# Only consider moving the arm if the trigger is pressed
		if rtr:
			# Set a new home position if this is a new trigger press
			if not self.prev_held_right_trigger:
				self.get_logger().info("MM Server: New Right Trigger")
				self.setNewPosition(x, y, z,
						is_right_controller=True, is_home_position=True)
				self.right_robot.set_home_position()
			
			delta = self.getRightControllerDelta()
			delta = convertControllerAxesToUR5(delta)
			self.right_robot.go_to_position(delta, wait=False)
		else:
			self.right_robot.stop()
		self.prev_held_right_trigger = rtr

	def unwrapOculusJoystickMsg(self, msg):
		return msg.pose.position.x, msg.pose.position.y, msg.pose.position.z, \
			msg.a, msg.b, msg.rtr, msg.rg
	
	def setNewPosition(self, x, y, z, is_right_controller=True, is_home_position=False):
		if is_home_position:
			self.right_controller_home = np.array([x, y, z, 0., 0., 0.])
		else:
			self.right_controller_position = np.array([x, y, z, 0., 0., 0.])

	def getRightControllerDelta(self):
		return self.right_controller_position - self.right_controller_home


def main(args=None):
	rclpy.init()
	mm_server_node = MMServerNode()
	rclpy.spin(mm_server_node)

if __name__ == '__main__':
	main()