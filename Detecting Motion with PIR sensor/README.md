# Detecting Motion with PIR Sensor

This project demonstrates how to use a PIR (Passive Infrared) Sensor to detect motion and trigger an LED response, along with sending a message to the Serial Monitor. It's a simple and effective introduction to motion sensing with Arduino.

## Components Used

- Arduino Board (e.g., Uno, Nano)
- PIR Motion Sensor
- LED
- Resistor (220Ω for LED)
- Breadboard and Jumper Wires

## Circuit Connections

### PIR Sensor

- **VCC** → Arduino **5V**
- **GND** → Arduino **GND**
- **OUT** → Arduino **Digital Pin 13**

### LED

- **Anode** (long leg) → Arduino **Digital Pin 12**
- **Cathode** (short leg) → GND via a **220Ω resistor**

## Code Explanation

### Pin Setup

- PIR sensor is set as **INPUT** on pin 13.
- LED is set as **OUTPUT** on pin 12.

### Motion Detection Logic

- The Arduino reads the PIR sensor using `digitalRead(pir)`.
- If motion is detected (`HIGH`), the LED turns **ON** and `"Motion Detected"` is printed to the Serial Monitor.
- If no motion is detected (`LOW`), the LED turns **OFF** and `"No Motion Detected"` is printed.

### Behavior

- LED provides immediate visual feedback.
- Serial Monitor logs the motion status in real-time.

## Features

- **Motion Detection:** Detects presence or movement in the sensor's range.
- **LED Feedback:** Visual cue for detected motion.
- **Serial Output:** Logs activity for debugging or monitoring purposes.

## Applications

- **Security Systems:** Trigger alarms, lights, or cameras when motion is detected.
- **Energy Saving Systems:** Automatically turn devices ON/OFF when people enter or leave a room.
- **Interactive Installations:** Trigger events in art or tech installations when someone is nearby.

## Enhancements

- Add a buzzer for an audible alert.
- Integrate with a relay to control higher-power devices.
- Send motion alerts over Wi-Fi using ESP8266 or similar modules.
