import rclpy
from rclpy.node import Node
from .oculus_reader.oculus_reader.reader import OculusReader
from mm_interfaces.msg import OculusJoystickInfo

class MMClientNode(Node):
	def __init__(self):
		super().__init__('mm_client_node')
		self.get_logger().info('Initialized MM Client')
		self.oculus = OculusReader()
		self.get_logger().info('MM Client: Oculus Controller Initialized-----')
		self.right_js_info_pub = self.create_publisher(OculusJoystickInfo, '/right_js_info', 10)
		self.left_js_info_pub = self.create_publisher(OculusJoystickInfo, '/left_js_info', 10)
		self.timer_duration = 0.02 # 50 hz
		self.timer = self.create_timer(self.timer_duration, self.publishJsInfo)

	def publishJsInfo(self):
		transformations, buttons = self.oculus.get_transformations_and_buttons()
		right_js_info = self.getRightJSInfo(transformations, buttons)
		left_js_info = self.getLeftJSInfo(transformations, buttons)
		self.right_js_info_pub.publish(right_js_info)
		self.left_js_info_pub.publish(left_js_info)

	def getRightJSInfo(self, transformations, buttons):
		positions = transformations['r'][:,3]
		info = OculusJoystickInfo()
		info.pose.position.x = positions[0]
		info.pose.position.y = positions[1]
		info.pose.position.z = positions[2]
		info.a = buttons['A']
		info.b = buttons['B']
		info.rtr = buttons['RTr']
		info.rg = buttons['RG']
		return info

	def getLeftJSInfo(self, transformations, buttons):
		positions = transformations['l'][:,3]
		info = OculusJoystickInfo()
		info.pose.position.x = positions[0]
		info.pose.position.y = positions[1]
		info.pose.position.z = positions[2]
		info.x = buttons['X']
		info.y = buttons['Y']
		info.ltr = buttons['LTr']
		info.lg = buttons['LG']
		return info


def main(args=None):
	rclpy.init()
	mm_client_node = MMClientNode()
	rclpy.spin(mm_client_node)

if __name__ == '__main__':
	main()