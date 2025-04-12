# Project: Motion-Controlled LED Changing

This project demonstrates the use of a PIR sensor to control the color of an LED and activate a buzzer when motion is detected. The LEDs change color depending on whether motion is detected or not.

## Components Used:
- **Arduino Board** (e.g., Uno, Nano)
- **PIR Motion Sensor** (to detect motion)
- **RGB LED** (to display different colors based on motion)
- **Buzzer** (to sound when motion is detected)
- **Resistors** (for the LED, if necessary)

## Circuit Connections:
### PIR Sensor:
- Connect the VCC of the PIR sensor to 5V on the Arduino.
- Connect the GND of the PIR sensor to GND on the Arduino.
- Connect the OUT of the PIR sensor to digital pin 13 on the Arduino (or another digital pin if changed in code).

### RGB LED:
- Connect the Red, Green, and Blue pins of the RGB LED to pins 11, 9, and 10 on the Arduino, respectively.
- Use current-limiting resistors (e.g., 220Ω) on the LED pins to protect the LEDs from excessive current.

### Buzzer:
- Connect the positive terminal of the buzzer to pin 3 on the Arduino.
- Connect the negative terminal of the buzzer to GND.

## Code Explanation:
### Pin Setup:
- The code initializes pins 9, 10, and 11 as OUTPUT for controlling the RGB LED colors.
- Pin 3 is set as an OUTPUT for the buzzer.
- Pin 13 is set as an INPUT for the PIR sensor to detect motion.

### Motion Detection:
- The PIR sensor detects motion and triggers the program when it goes HIGH (motion detected). When motion is detected, the buzzer sounds, and the LED changes to blue.
- If no motion is detected, the LED is set to magenta, and the buzzer is turned off.

### Color Control:
- The function `color()` takes three arguments: `redv`, `greenv`, and `bluev` (the RGB values) and sets the corresponding LED colors using the `analogWrite()` function.
- The colors are represented as:
  - **Blue** (0, 0, 255) when motion is detected.
  - **Magenta** (255, 0, 255) when no motion is detected.

### Behavior:
- When motion is detected, the PIR sensor sends a HIGH signal, triggering the buzzer and turning the LED blue.
- When the motion stops (the PIR sensor goes LOW), the buzzer stops, and the LED turns magenta.

## Features:
- **Motion Sensitivity**: The system changes LED color based on the detection of motion.
- **Color Feedback**: The RGB LED provides a visual representation of motion detection.
- **Sound Alert**: The buzzer provides an audio alert when motion is detected.

## Applications:
- **Security Systems**: Use this as part of a simple security system to alert you visually and audibly when motion is detected.
- **Energy-saving Systems**: Use motion detection to control lighting systems (e.g., turn lights on when entering a room).
- **Interactive Displays**: Implement motion-based interactions where the system responds by changing LED colors and triggering sounds.
