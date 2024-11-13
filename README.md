# Smart Glasses for Visually Impaired

This project demonstrates the development of a smart glasses system designed to assist visually impaired individuals by providing real-time audio feedback for object detection and obstacle avoidance. The system integrates computer vision and edge inference on an ESP-CAM, as well as an ultrasonic sensor for distance measurement, providing a comprehensive solution for navigation in urban environments.

## Key Features:
- **Real-Time Object Detection**: Uses the ESP32-based ESP-CAM module to detect street signs and obstacles.
- **Ultrasonic Sensor Integration**: An ultrasonic sensor is integrated with the ESP32-CAM and Arduino Nano for detecting nearby obstacles and alerting the user.
- **Audio Feedback**: Provides auditory notifications to help the visually impaired navigate safely.
- **Edge Inference**: Deployed a machine learning model optimized for edge devices using TensorFlow Lite.
- **Model Accuracy**: Achieved 77% accuracy in detecting street signs.

## Technologies Used:
- **ESP32-CAM**: Camera module for object detection.
- **Arduino Nano**: MCU used for processing ultrasonic sensor data and coordinating system operations.
- **Ultrasonic Sensor**: Measures distance to obstacles and provides proximity feedback.
- **TensorFlow Lite**: Machine learning framework for deploying models on embedded systems.
- **C/C++**: Programming languages used for hardware interfacing and algorithm implementation.
- **Arduino IDE**: Development environment for programming the ESP32 and Arduino Nano.
- **Computer Vision**: For real-time object detection and classification.
- **IoT**: Integration with embedded systems for seamless operation.

## Installation & Setup:
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/Smart-Glasses-for-Visually-Impaired.git
   ```

2. Install the required libraries:
  - Install the necessary libraries for ESP32 in the Arduino IDE.
  - Ensure TensorFlow Lite library for edge inference is installed.
3. Connect the ESP-CAM module and the ultrasonic sensor to your Arduino Nano.
4. Upload the code to both the ESP32 (for camera processing) and the Arduino Nano (for sensor data processing).

## How It Works:
The system captures video frames from the ESP-CAM and processes them on the ESP32. Using a pre-trained TensorFlow Lite model, the system detects specific objects (like street signs) and triggers audio feedback via the connected speaker. Simultaneously, the ultrasonic sensor connected to the Arduino Nano detects the proximity of obstacles. The Arduino Nano processes the sensor data and provides additional feedback to alert the user about nearby objects.

## License:
This project is licensed under the MIT License - see the LICENSE file for details.

