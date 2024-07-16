import rclpy
from rclpy.node import Node
from mm_interfaces.msg import OculusJoystickInfo
from .OculusController import OculusController

class MMClientNode(Node):
	def __init__(self):
		super().__init__('mm_client_node')
		self.get_logger().info('Initialized MM Client')
		self.oculus_controller = OculusController()
		self.get_logger().info('MM Client: Oculus Controller Initialized-----')
		self.right_js_info_pub = self.create_publisher(OculusJoystickInfo, '/right_js_info', 10)
		self.timer = self.create_timer(0.05, self.publishJsInfo)

	def publishJsInfo(self):
		pos = self.oculus_controller.getCurrentPosition()
		buttons = self.oculus_controller.getButtons()
		info = OculusJoystickInfo()
		info.pose.position.x = pos[0]
		info.pose.position.y = pos[1]
		info.pose.position.z = pos[2]
		info.a = buttons['A']
		info.b = buttons['B']
		info.rtr = buttons['RTr']
		info.rg = buttons['RG']
		self.right_js_info_pub.publish(info)

def main(args=None):
	rclpy.init()
	mm_client_node = MMClientNode()
	rclpy.spin(mm_client_node)

if __name__ == '__main__':
	main()