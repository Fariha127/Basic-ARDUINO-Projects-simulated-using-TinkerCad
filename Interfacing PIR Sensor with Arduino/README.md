# Interfacing PIR Sensor with Arduino

## Project Overview:
This project demonstrates how to use a **PIR (Passive Infrared) Sensor** with an Arduino to detect motion. Upon detecting motion, the system triggers an LED to turn on and provides a serial output displaying the motion's start and end times.

## Components Used:
- **Arduino Board** (e.g., Uno, Nano)
- **PIR Motion Sensor** (to detect motion)
- **LED** (to visually indicate motion detection)
- **Resistor** (for LED, typically 220Ω)
- **Wires and Breadboard** (for prototyping)

## Circuit Connections:
### PIR Sensor:
- **VCC** pin of the PIR sensor to **5V** on the Arduino.
- **GND** pin of the PIR sensor to **GND** on the Arduino.
- **OUT** pin of the PIR sensor to **digital pin 8** on the Arduino (or another digital pin if changed in code).

### LED:
- **Positive terminal (anode)** of the LED to **pin 7** on the Arduino.
- **Negative terminal (cathode)** of the LED to **GND** through a current-limiting resistor (220Ω typically).

## Code Explanation:
### Calibration:
- The system begins by calibrating the PIR sensor for a specified duration (`calibrationTime`), during which it waits for the sensor to stabilize. 
- During this time, dots are printed in the **Serial Monitor** to indicate the progress.
- Once calibration is complete, a message `"SENSOR ACTIVE"` is printed to the Serial Monitor.

### Motion Detection:
- The system continuously checks the PIR sensor (`digitalRead(pirPin)`):
  - When the PIR sensor detects motion (**HIGH signal**), the **LED** is turned ON, and a message `"Motion detected at X sec"` is printed to the **Serial Monitor**, where `X` is the time in seconds since the Arduino started.
  - The `lockLow` variable prevents multiple motion detections from being printed continuously, ensuring cleaner output.

### Motion End Detection:
- If the sensor no longer detects motion (**LOW signal**), the system records the time the motion ended and turns off the LED.
- After a specified pause (`pause`), it prints the message `"Motion ended at Y sec"` where `Y` represents the time in seconds since the Arduino started.

### Delay Logic:
- A delay (`delay(50)`) ensures the system does not print messages too frequently, allowing for smoother operation.

## Key Features:
- **Calibration**: The PIR sensor is calibrated at the start of the program, ensuring reliable motion detection.
- **Motion Detection**: The program detects motion and provides real-time feedback on the Serial Monitor and via an LED.
- **Start and End Times**: The system provides timestamps for both the start and end of detected motion, making it suitable for time-based logging or analysis.
- **LED Feedback**: The LED turns on when motion is detected and off when motion ends.

## Applications:
- **Security Systems**: This project can be extended to trigger alarms, cameras, or other security devices when motion is detected.
- **Automation**: Use the system to activate devices when a person enters a room or area.
- **Interactive Systems**: Detect human presence and trigger responses based on motion, such as turning on lights or starting a process.
