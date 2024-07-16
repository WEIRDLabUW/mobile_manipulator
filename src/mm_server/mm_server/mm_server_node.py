import rclpy
from rclpy.node import Node
from mm_interfaces.msg import OculusJoystickInfo

class MMServerNode(Node):
	def __init__(self):
		super().__init__('mm_server_node')
		self.get_logger().info('Initialized MM Server')
		self.right_js_info_sub = self.create_subscription(
			OculusJoystickInfo, '/right_js_info', self.jsCallback, 10)

	def jsCallback(self, msg):
		x = msg.pose.position.x
		y = msg.pose.position.y
		z = msg.pose.position.z
		a = msg.a
		b = msg.b
		rtr = msg.rtr
		rg = msg.rg

		print("x: ", x, "y: ", y, "z: ", z, "a: ", a, "b: ", b, "rtr: ", rtr, "rg: ", rg)

def main(args=None):
	rclpy.init()
	mm_server_node = MMServerNode()
	rclpy.spin(mm_server_node)

if __name__ == '__main__':
	main()