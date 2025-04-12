# Project: Traffic Light Demo with Arduino

This project simulates a simple traffic light system using an Arduino. It controls three LEDs (Red, Yellow, and Green) to represent the traffic light colors. The system is triggered by a button press, and based on the press, the traffic light changes from **STOP** (Red) to **GET READY** (Yellow) and then to **GO** (Green).

## Components Used:
- **Arduino Board** (e.g., Uno, Nano)
- **3 LEDs** (Red, Yellow, Green)
- **1 Push Button**
- **Resistors** (220 ohms for LEDs, 10k ohms for the button)
- **Breadboard** and **Jumper Wires**

## Circuit Connections:
### LEDs:
- Connect the **Red LED** to pin 13.
- Connect the **Yellow LED** to pin 12.
- Connect the **Green LED** to pin 11.

### Button:
- Connect one terminal of the **Button** to pin 2 and the other terminal to **GND** (with a pull-down resistor if needed).
- Use **220-ohm resistors** for the LEDs to limit current.
- If needed, add a **10k-ohm pull-down resistor** for the button.

## Code Explanation:
### Pin Setup:
- The LEDs are connected to pins 13, 12, and 11, which are set to **OUTPUT** mode.
- The button is connected to pin 2, which is set to **INPUT** mode.

### Traffic Light Logic:
- The **Red LED** lights up for 2 seconds when the button is pressed, indicating **STOP**.
- After a small delay, the **Yellow LED** lights up for 2 seconds, indicating **GET READY**.
- The **Green LED** lights up for 2 seconds, indicating **GO**.
- After the Green LED is turned off, the cycle completes and waits for the button to be pressed again.

### Button Control:
- The program reads the button's state (whether it is pressed or not) using `digitalRead(buttonPin)`.
- When the button is pressed (`buttonState == 1`), the traffic light sequence starts.

### Serial Output:
- The program uses `Serial.println()` to print the current state of the traffic light to the **Serial Monitor**. This provides feedback for **STOP**, **GET READY**, and **GO**.

## Project Flow:
### Button Pressed:
- The button triggers the light sequence to start.
- The **Red LED** turns on (**STOP**), followed by a brief off period.
- The **Yellow LED** turns on (**GET READY**), followed by another off period.
- Finally, the **Green LED** turns on (**GO**) for 2 seconds, then turns off.

### Wait for Next Button Press:
- After the traffic light sequence completes, the program waits for the button to be pressed again to repeat the sequence.

## Features:
- **Traffic light simulation** using 3 LEDs: Red, Yellow, and Green.
- **Button control** to trigger the traffic light sequence.
- **Serial output** to display traffic light status in the Serial Monitor.

## Applications:
- **Educational Projects**: Learn about controlling LEDs and button inputs.
- **Traffic Simulation**: Model traffic light systems for simple automations.
- **Arduino-based Projects**: Implement button-controlled sequences and LED light systems.
