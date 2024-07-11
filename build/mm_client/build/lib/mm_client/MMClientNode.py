import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from geometry_msgs.msg import Pose
from sensor_msgs.msg import Joy
from OculusController import OculusController

class MMClientNode(Node):
	def __init__(self):
		super().__init__('mm_client_node')
		self.oculus_controller = OculusController()
		self.right_js_pos_pub = self.create_publisher(Pose, '/right_js_position', 10)
		self.right_js_button_pub = self.create_publisher(Joy, '/right_js_buttons', 10)
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
		print(buttons)

if __name__ == '__main__':
	rclpy.init()
	mm_client_node = MMClientNode()
	rclpy.spin(mm_client_node)