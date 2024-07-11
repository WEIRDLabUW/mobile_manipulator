import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from geometry_msgs.msg import Pose
from mm_interfaces.msg import JoystickButtons
from .OculusController import OculusController

class MMClientNode(Node):
	def __init__(self):
		super().__init__('mm_client_node')
		self.get_logger().info('Initialized MM Client')
		self.oculus_controller = OculusController()
		print('MM Client: Oculus Controller Initialized-----')
		self.right_js_pos_pub = self.create_publisher(Pose, '/right_js_position', 10)
		self.right_js_button_pub = self.create_publisher(JoystickButtons, '/right_js_buttons', 10)
		self.timer = self.create_timer(0.5, self.publishJsData)

	def publishJsData(self):
		self.publishJSPosition()
		self.publishJSButtons()

	def publishJSPosition(self):
		pos = self.oculus_controller.getCurrentPosition()
		pose = Pose()
		pose.position.x = pos[0]
		pose.position.y = pos[1]
		pose.position.z = pos[2]
		self.right_js_pos_pub.publish(pose)

	def publishJSButtons(self):
		buttons = self.oculus_controller.getButtons()
		joystick_buttons = JoystickButtons()
		joystick_buttons.a = buttons['A']
		joystick_buttons.b = buttons['B']
		joystick_buttons.rtr = buttons['RTr']
		joystick_buttons.rg = buttons['RG']
		self.right_js_button_pub.publish(joystick_buttons)


def main(args=None):
	rclpy.init()
	mm_client_node = MMClientNode()
	rclpy.spin(mm_client_node)

if __name__ == '__main__':
	main()