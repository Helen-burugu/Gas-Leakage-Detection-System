Gas Leakage Detection System | Arduino Uno Project
An Arduino-based gas leakage detection system designed to enhance safety by detecting gas leaks, triggering alerts, and automatically shutting off the gas supply.

Features
Real-time gas detection using an MQ-2 sensor
Automatic gas supply shut-off with a servo motor
Audible alert system using a buzzer
Exhaust fan activation for ventilation
Suitable for residential, commercial, and industrial applications
Components Used
Arduino Uno (Microcontroller)
MQ-2 Gas Sensor (Detects LPG, propane, methane)
Servo Motor (Closes gas supply valve)
Buzzer (Audible alarm for alerts)
Cooling Fan (Exhaust system for ventilation)
IRF540N Mosfet (Controls fan operation)
Jumper Wires, Breadboard, and Power Supply
Setup & Installation
Clone the repository:
git clone https://github.com/yourusername/Gas-Leakage-Detection-System.git
cd Gas-Leakage-Detection-System
Open Arduino IDE, load gas_leakage_system.ino, select Board: Arduino Uno, and upload the code.
Working Principle
The MQ-2 sensor continuously monitors gas concentration.
If the gas level exceeds the threshold (250):
The buzzer sounds an alarm 🚨
The fan activates for ventilation 🔄
The servo motor shuts off the gas supply 🔒
The system resets when gas levels return to normal.
Future Enhancements
IoT integration for remote monitoring
Mobile app notifications
AI-based anomaly detection
License
This project is open-source and available under the MIT License.

Contributions
Contributions are welcome! Feel free to submit a pull request.
