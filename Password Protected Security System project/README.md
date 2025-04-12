# Project: Password Protected Security System

This project demonstrates how to build a simple passcode-based security system using an Arduino, a 4x4 keypad, and an RGB LED. The system checks if the entered passcode matches the correct one. If the passcode is correct, it grants access (turns on the green LED), otherwise, it denies access (turns on the red LED) and produces a buzzer sound.

## Components Used:
- **Arduino Board** (Uno, Mega, etc.)
- **4x4 Keypad** (for entering the passcode)
- **RGB LED** (for access indication)
- **Buzzer** (for feedback sounds)
- **Resistors** (for current limiting to LED and buzzer)
- **Breadboard & Jumper Wires**

## Circuit Connections:
### Keypad:
- Connect the rows of the keypad to pins 9, 8, 7, 6 on the Arduino.
- Connect the columns of the keypad to pins 5, 4, 3, 2 on the Arduino.

### RGB LED:
- **Red Pin** → Pin 10
- **Green Pin** → Pin 11
- **Common Cathode** → GND (ground)

### Buzzer:
- **Positive Pin** → Pin 12
- **Negative Pin** → GND

## Code Explanation:
### Keypad Setup:
- The **Keypad** library is used to read key presses from the 4x4 keypad. The keys are mapped to a matrix of rows and columns, and the `rowPins` and `colPins` arrays are used to connect the keypad to the Arduino.

### Initial Setup (`setup()`):
- The RGB LED pins are set as outputs and initialized to the red LED on (access denied).
- The buzzer pin is also set as an output, and the **Serial monitor** is used to display instructions and feedback.

### Keypad Input Handling (`loop()`):
- When a key is pressed, it is added to the input string (`vstup`), and `*` is printed on the Serial Monitor (instead of the actual key).
- Once 4 digits are entered, the code checks if the entered passcode matches the correct passcode (`"0305"`).
  - **If the passcode is correct:**
    - The **green LED** is turned on, and a buzzer sound is generated.
  - **If the passcode is incorrect:**
    - The **red LED** stays on, and the buzzer emits two error beeps.
- After processing the passcode, the input string is cleared, and the system is ready for a new attempt.

## Features:
- **Red LED** for access denied (wrong passcode).
- **Green LED** for access granted (correct passcode).
- **Buzzer** sounds for correct or incorrect passcodes.
- Simple user interface via a **4x4 keypad** for input.

## Applications:
- **Security Systems**: Create a simple access control system for doors, lockers, or other secured areas.
- **Embedded Systems**: Use the project as part of an embedded security project for controlling access to sensitive devices.
- **Educational Projects**: Learn how to interface keypads, LEDs, and buzzers with an Arduino.
