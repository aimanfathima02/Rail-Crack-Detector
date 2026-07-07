# 🚆 Smart Rail Detection Robot

An intelligent railway track inspection robot designed to improve railway safety by automatically detecting rail cracks and obstacles. The robot continuously monitors railway tracks, alerts maintenance teams in case of faults, and provides the location of detected issues using GPS and GSM communication.

---

## 📌 Project Overview

Railway track failures are one of the major causes of train accidents. Manual inspection is time-consuming, expensive, and prone to human error. This project presents an autonomous rail detection robot capable of identifying rail cracks and obstacles while transmitting the fault location to maintenance personnel.

---

## ✨ Features

- 🚆 Automatic railway track inspection
- ⚠️ Rail crack detection
- 🚧 Obstacle detection
- 🔔 Buzzer alarm system
- 📍 GPS location tracking
- 📱 GSM alert notifications
- 📟 16×2 LCD status display
- 🤖 Autonomous robot movement
- 💾 Data logging support
- 🔋 Battery monitoring
- 📲 Bluetooth monitoring (Future Enhancement)

---

## 🛠 Hardware Components

| Component | Quantity |
|-----------|----------|
| Arduino Mega 2560 | 1 |
| L298N Motor Driver | 1 |
| DC Motors | 2 |
| Rail Crack Sensor | 1 |
| Ultrasonic Sensor (HC-SR04) | 1 |
| GPS Module (NEO-6M) | 1 |
| GSM Module (SIM800L) | 1 |
| 16×2 LCD (I2C) | 1 |
| Active Buzzer | 1 |
| Battery Pack | 1 |
| Chassis | 1 |

---

## 💻 Software Requirements

- Visual Studio Code
- PlatformIO IDE
- Arduino Framework
- Git

### Libraries

- Wire
- LiquidCrystal_I2C
- TinyGPS++
- SoftwareSerial
- EEPROM

---

## 📂 Project Structure

```text
RailDetectionRobot/
│
├── include/
│   ├── Config.h
│   ├── MotorController.h
│   ├── SensorManager.h
│   ├── LCDManager.h
│   ├── GPSManager.h
│   ├── GSMManager.h
│   ├── Navigation.h
│
├── src/
│   ├── main.cpp
│   ├── Config.cpp
│   ├── MotorController.cpp
│   ├── SensorManager.cpp
│   ├── LCDManager.cpp
│   ├── GPSManager.cpp
│   ├── GSMManager.cpp
│   ├── Navigation.cpp
│
├── docs/
├── images/
├── circuit/
├── README.md
└── platformio.ini
```

---

## ⚙️ Working Principle

1. The robot moves autonomously along the railway track.
2. Rail crack sensors continuously monitor the condition of the rails.
3. Ultrasonic sensors detect obstacles ahead.
4. If a crack or obstacle is detected:
   - The robot stops immediately.
   - The buzzer is activated.
   - GPS coordinates are obtained.
   - GSM sends an alert to the maintenance team.
   - The fault is displayed on the LCD.
5. The inspection continues after manual intervention or system reset.

---

## 🚀 Future Enhancements

- AI-based crack classification using computer vision
- ESP32 Wi-Fi integration
- Cloud database (Firebase)
- Mobile application
- Live GPS tracking dashboard
- Solar-powered operation
- Camera-based inspection
- Automatic report generation
- IoT analytics dashboard

---

## 📊 Applications

- Railway track inspection
- Smart railway infrastructure
- Preventive maintenance
- Railway safety monitoring
- Autonomous inspection systems

---

## 👨‍💻 Author

**Aiman Fathima**

Bachelor of Engineering (Electronics & Instrumentation Engineering)


## ⭐ Future Scope

The proposed system can be integrated with artificial intelligence, cloud computing, and IoT technologies to build a fully autonomous railway inspection system capable of real-time monitoring, predictive maintenance, and centralized fault reporting.
