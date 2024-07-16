import math

def restrictVal(val, e):
    return math.copysign(min(math.fabs(val), e),val)

# Takes in a delta movement, and restricts to given apsilon across all axes
def limitPositionMovement(desiredMovement, epsilon):
    assert(epsilon > 0)
    for i in range(len(desiredMovement)):
        desiredMovement[i] = restrictVal(desiredMovement[i], epsilon)
    return desiredMovement

# Takes in current and final position and returns the next position
def getMovement(currPos, goalPos, max_movement):
    delta = goalPos - currPos
    movement_limited = limitPositionMovement(delta, max_movement)
    return currPos + movement_limited

def convertControllerAxesToUR5(controllerDelta):
    controllerDelta[2] *= -1
    controllerDelta[1], controllerDelta[2] = controllerDelta[2], controllerDelta[1] # y is z
    controllerDelta[3] *= -1
    return controllerDelta

def convertJoystickValuesToBaseVelocities(vel_x, vel_y):
    # Scale velocities by 0.2 to limit base speed
    vel_x = vel_x * 0.2
    vel_y = vel_y * 0.2
    # x and y axes between oculus controller and base are flipped
    # polarity is also flipped in the x direction
    base_vel_x = vel_y
    base_vel_y = -1 * vel_x
    return [base_vel_x, base_vel_y]

def printArray(arr):
    out = "["
    for i in arr:
        out += "{:.2f},".format(i)
    out += "]"
    print(out)
