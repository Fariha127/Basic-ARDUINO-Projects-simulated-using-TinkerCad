# Project: Solar Tracker System

This project implements a **dual-axis solar tracker** using LDRs and servo motors controlled by an Arduino. It automatically orients a solar panel to face the direction of maximum sunlight by comparing light intensity from multiple directions and adjusting servos accordingly.

---

## 🔧 Components Used:
- **Arduino Uno**  
- **4× LDRs (Light Dependent Resistors)**  
- **4× 10kΩ Resistors** (for voltage divider)  
- **2× Servo Motors** (for horizontal and vertical movement)  
- **Breadboard and Jumper Wires**  
- **Solar Panel (Optional for testing)**

---

## 🔌 Circuit Connections:

### LDR Sensors (connected in voltage dividers with resistors):
- **Top-Left LDR** → A0  
- **Top-Right LDR** → A2  
- **Bottom-Left LDR** → A1  
- **Bottom-Right LDR** → A3  

### Servo Motors:
- **Horizontal Servo** → Pin 9  
- **Vertical Servo** → Pin 10  

Power LDR circuits using 5V and GND through 10kΩ resistors.

---

## 🧠 Code Explanation:

- **Initialization (`setup()`)**:
  - Attaches both servos and sets their initial positions.
  - Delay allows system to stabilize before tracking.

- **Main Loop (`loop()`)**:
  - Reads analog values from 4 LDRs.
  - Calculates average values for top (`avt`), bottom (`avd`), left (`avl`), and right (`avr`) directions.
  - Finds difference between vertical and horizontal light intensity.
  - If the difference exceeds a set **tolerance** (`tol`), the servos are adjusted slightly to track the brighter side:
    - Vertical servo (up/down) adjusted based on top vs. bottom light.
    - Horizontal servo (left/right) adjusted based on left vs. right light.
  - Servo limits prevent mechanical over-rotation.

---

## 🌟 Features:
- **Automatic sunlight tracking** on two axes  
- **Real-time response** to changing light conditions  
- **Precise control** with tolerance settings and servo limits  
- **Compact design** for integration into solar applications

---

## ☀️ Applications:
- **Solar panels** for maximum power efficiency  
- **Educational robotics projects**  
- **Green energy demonstrations**  
- **Automated solar systems** for irrigation, charging, or lighting  
- **Smart solar street lights**


