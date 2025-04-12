# Project: Making a Piano Using Arduino

This project demonstrates how to create a simple piano using an Arduino. By pressing different buttons, the buzzer generates corresponding musical tones, simulating a basic electronic piano.

## Components Used:
- **Arduino Board** (Uno, Mega, etc.)
- **Piezo Buzzer** (for sound output)
- **8 Push Buttons** (for piano keys)
- **Resistors** (10kΩ - Optional for pull-down configuration)
- **Breadboard & Jumper Wires**

## Circuit Connections:
### Buttons (but1 to but8):
- Connect each button to digital pins 2 to 9 on the Arduino board.
- One terminal of each button connects to an Arduino pin.
- The other terminal connects to GND (using internal pull-up resistors).

### Buzzer:
- **Buzzer Positive (+)** → Digital Pin 11
- **Buzzer Negative (-)** → GND

## Code Explanation:
### Setup (`setup()`):
- Configures 8 digital pins as inputs for the buttons.
- Configures buzzer pin (11) as an output.

### Reading Button Presses (`loop()`):
- Checks the state of each button using `digitalRead()`.
- If a button is pressed (HIGH), it plays a specific tone using `tone()`.
- Each button generates a different frequency, mimicking musical notes.
- A small delay (`delay(10)`) prevents multiple rapid triggers.
