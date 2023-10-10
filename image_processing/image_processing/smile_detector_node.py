import rclpy
from rclpy.node import Node
from std_msgs.msg import Header
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import os

class SmileDetectionNode(Node):
    def __init__(self):
        super().__init__('smile_detection_node')
        self.publisher = self.create_publisher(Image, '/image_raw', 10)
        self.cv_bridge = CvBridge()
        self.face_cascade = cv2.CascadeClassifier('./haarcascade_frontalface_default.xml')
        self.smile_cascade = cv2.CascadeClassifier('./haarcascade_smile.xml')
        self.counter = 0
        self.smile_detected = False

    def detect(self, gray):
        faces = self.face_cascade.detectMultiScale(gray, 1.3, 5)
        for (x, y, w, h) in faces:
            roi_gray = gray[y:y + h, x:x + w]
            smiles = self.smile_cascade.detectMultiScale(roi_gray, 1.8, 20)
            if len(smiles) > 0:
                return True
        return False

    def main(self):
        video_capture = cv2.VideoCapture(0)
        while video_capture.isOpened():
            _, frame = video_capture.read()
            cv2.imshow('Video', frame)
            if (self.smile_detected):
                ros_image = self.cv_bridge.cv2_to_imgmsg(self.current_image, encoding="bgr8")
                self.publisher.publish(ros_image)
                
            else:
                gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
                smile = self.detect(gray)
                if smile:
                    self.counter += 1
                    if self.counter > 10:
                        # Publish the image to the /image_raw topic
                        self.current_image = frame
                        self.smile_detected = True
                        print("detected smile")
                        

        video_capture.release()
        cv2.destroyAllWindows()


def main(args=None):
    rclpy.init(args=args)
    smile_detection_node = SmileDetectionNode()
    smile_detection_node.main()
    rclpy.shutdown()


if __name__ == '__main__':
    main()