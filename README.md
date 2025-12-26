# Obstacle Avoiding Robot 🚘

## 📌 Overview
This project demonstrates an autonomous obstacle avoiding robot that detects obstacles using an ultrasonic sensor and changes its direction automatically. The robot continuously scans its surroundings and avoids collisions without human intervention.

## 🎯 Problem Statement
Autonomous robots must be able to navigate safely in unknown environments. Manual control is not practical in dynamic spaces. This project solves the problem by enabling real-time obstacle detection and avoidance.

## 🛠️ Hardware Components
- Arduino Uno / Nano
- Ultrasonic Sensor (HC-SR04)
- L298N Motor Driver
- DC Motors
- Robot Chassis
- Battery Pack
- Connecting Wires

## 💻 Software & Tools
- Arduino IDE
- Embedded C/C++

## ⚙️ Working Principle
1. Ultrasonic sensor measures distance to nearby objects.
2. Arduino calculates distance using echo time.
3. If an obstacle is detected within a threshold distance, the robot stops or changes direction.
4. Motor driver controls motor movement accordingly.

## ✨ Features
- Real-time obstacle detection
- Automatic direction control
- Collision-free navigation
- Simple and cost-effective design

## 🧪 Results
- Successfully avoids obstacles in real-time.
- Smooth movement and quick response.
- Reliable distance measurement.

## 📷 Project Images
Robot photos and wiring diagrams are available in the **images** folder.

## ▶️ Demo Video
(Add demo video link here)

## 🚀 How to Run
1. Assemble the hardware as per the wiring diagram.
2. Upload the Arduino code from the `code` folder.
3. Power the robot.
4. Place the robot in an obstacle-filled environment.

## 📚 Future Improvements
- Add servo-mounted ultrasonic sensor for wider scanning
- Implement PID-based motion control
- Integrate IR sensors for better accuracy
- Add Bluetooth/Wi-Fi control

## 👨‍🎓 Author
**Govinda Bhandari**  
Final Year ECE Student
