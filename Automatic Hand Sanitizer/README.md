# Project: Automatic Hand Sanitizer Dispenser

This project uses an ultrasonic sensor to detect the presence of a hand and automatically activate a sanitizer dispenser. The Arduino controls the system by processing the distance data from the ultrasonic sensor. When the hand is within range (less than 10 cm), the servo motor is triggered to dispense sanitizer, offering a hands-free operation.

## Components Used:
- **Arduino Board** (Uno, Mega, etc.)
- **HC-SR04 Ultrasonic Sensor** (for hand detection)
- **Servo Motor** (to trigger the sanitizer dispenser)
- **Resistors** (for current limiting)
- **Breadboard & Jumper Wires**

## Circuit Connections:
### Ultrasonic Sensor:
- **Trig Pin** → Pin 7 on Arduino
- **Echo Pin** → Pin 6 on Arduino
- **VCC** → 5V
- **GND** → GND

### Servo Motor:
- **Control Pin** → Pin 5 on Arduino
- **VCC** → 5V
- **GND** → GND

## Code Explanation:
- The **ultrasonic sensor** measures the distance between the sensor and the hand. The `pulseIn()` function is used to calculate the time taken for the ultrasonic pulse to return, which is then converted into distance (in centimeters).
- If the distance is less than 10 cm, the servo motor moves to dispense sanitizer.
- The **servo** moves to a specific position (e.g., 0° for no action, 90° for dispenser activation) depending on the distance detected.

## Features:
- **Hands-free operation** for dispensing sanitizer, improving hygiene and reducing contact.
- **Real-time distance measurement** with an ultrasonic sensor.
- **Servo activation** to trigger the dispensing mechanism.
- **Simple and efficient setup** using Arduino and minimal components.

## Applications:
- **Public Health and Hygiene**: Ideal for public spaces like offices, schools, and hospitals, promoting contactless sanitization.
- **Automation**: Can be integrated into smart automation systems for automatic sanitation in homes or businesses.
- **Educational Projects**: A great project for learning about sensors, servo motors, and Arduino-based automation.
- 
