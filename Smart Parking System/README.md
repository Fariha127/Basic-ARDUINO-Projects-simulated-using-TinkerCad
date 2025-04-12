# Project: Smart Parking System

This project demonstrates a basic **automated parking system** using Arduino. It detects the availability of parking slots using IR sensors and operates entry and exit barriers with servo motors. Real-time slot status is displayed on a 16x2 LCD, making it a helpful tool for parking management systems.

---

## 🔧 Components Used:
- **Arduino Uno**  
- **2× Servo Motors** (for entry and exit gates)  
- **4× IR Sensors**  
  - Slot 1 status  
  - Slot 2 status  
  - Entry detection  
  - Exit detection  
- **16x2 LCD Display**  
- **Jumper Wires and Breadboard**  
- **Power Supply**

---

## 🔌 Circuit Connections:

### LCD:
- RS → Pin 12  
- E  → Pin 11  
- D4 → Pin 5  
- D5 → Pin 4  
- D6 → Pin 3  
- D7 → Pin 2  

### Servo Motors:
- Entry Servo (S1) → Pin 10  
- Exit Servo (S2)  → Pin 9  

### IR Sensors:
- Slot 1 Sensor → Pin 7  
- Slot 2 Sensor → Pin 8  
- Entry Sensor → Pin 6  
- Exit Sensor → Pin 13  

---

## 📟 Code Explanation:

- **Initialization (`setup()`)**:
  - LCD is initialized and displays a welcome message.
  - Servo motors are attached and set to initial position (0°).
  - IR sensors are configured as inputs.

- **Main Loop (`loop()`)**:
  - Continuously checks if parking slots are occupied using IR sensors.
  - Updates the LCD with slot availability status.
  - If a car is detected at the entry sensor, the **entry gate servo rotates** to allow entry.
  - If a car is detected at the exit sensor, the **exit gate servo rotates** to open the exit.
  - Servos return to the closed (0°) position if no car is detected.

---

## 🌟 Features:
- Real-time **slot availability detection**
- Automated **entry/exit barrier control**
- Visual display of slot status on **LCD**
- **Non-contact IR sensing** for detection
- Simple and compact code for simulation and real-world use

---

## 🚗 Applications:
- Shopping mall or office **parking lots**
- **Smart city** traffic and parking management
- **Automated toll booths** or vehicle tracking systems
- Educational demos for **IoT and embedded systems**  
- Entry automation in **gated communities** or hostels

---


