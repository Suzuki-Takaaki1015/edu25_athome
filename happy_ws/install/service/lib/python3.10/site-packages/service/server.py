import rclpy
from service_msgs.srv import StringCommand
from rclpy.node import Node

class BringmeService(Node):
    def __init__(self):
        super().__init__("bringme_service")

        self.srv = self.create_service(
            StringCommand, "command", self.service_call
        )
        self.food = ['candy', 'apple', 'banana']

    def service_call(self, request, response):
        item = request.command
        if item in self.food:
            response.answer = f'はい、{item}です'
        else:
            response.answer = f'{item}を見つけることができませんでした。'
        self.get_logger().info(f'レスポンス：{response.answer}')
        return response

def main(args=None):
    rclpy.init(args=args)
    server = BringmeService()
    rclpy.spin(server)
    rclpy.shutdown()

if __name__ == "__main__":
    main()