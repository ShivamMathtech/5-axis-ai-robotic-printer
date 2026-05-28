import rclpy

from rclpy.node import Node

from std_msgs.msg import String

class RoboticArmController(Node):

    def __init__(self):

        super().__init__('robotic_arm_controller')

        self.publisher_ = self.create_publisher(
            String,
            'robotic_arm/status',
            10
        )

        self.timer = self.create_timer(
            1.0,
            self.publish_status
        )

    def publish_status(self):

        msg = String()

        msg.data = "5-Axis Robotic Arm Running"

        self.publisher_.publish(msg)

        self.get_logger().info(msg.data)

def main(args=None):

    rclpy.init(args=args)

    node = RoboticArmController()

    rclpy.spin(node)

    node.destroy_node()

    rclpy.shutdown()

if __name__ == '__main__':
    main()