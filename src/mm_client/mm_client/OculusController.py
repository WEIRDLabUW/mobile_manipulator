import sys
import os
from .oculus_reader.oculus_reader.reader import OculusReader
import time

class OculusController(object):
	"""Interface for getting useful info from the oculus controller"""
	def __init__(self):
		super(OculusController, self).__init__()
		self.oculus = OculusReader()
		# Delay to allow for oculus reader initialization
		time.sleep(1)

	# Return current position of the right controller
	def getCurrentPosition(self):
		transform = self.oculus.get_transformations_and_buttons()[0]['r']
		return transform[:,3]

	# Returns the state of the buttons on the right controller
	# Buttons are A, B, RTr (right trigger), RG (right gripper)
	def getButtons(self):
		return self.oculus.get_transformations_and_buttons()[1]
