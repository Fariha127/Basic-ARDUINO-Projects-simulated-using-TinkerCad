# Project: Mini Piano Using Arduino

This project demonstrates how to create a mini piano using an Arduino, pushbuttons, and a buzzer. Each button corresponds to a specific musical note, and when a button is pressed, the Arduino generates the corresponding sound through the buzzer.

## Components Used:
- **Arduino Board** (e.g., Uno, Nano)
- **Pushbuttons** (7 pushbuttons corresponding to musical notes)
- **Buzzer** (for sound output)
- **Resistors** (for pull-down configuration on buttons)
- **Breadboard & Jumper Wires**

## Circuit Connections:
### Pushbuttons:
- Connect the pushbuttons to the Arduino's digital pins 2, 4, 6, 7, 9, 11, 12.
- The other side of each pushbutton is connected to GND.
- Use pull-up resistors or enable internal pull-ups in the code for the buttons.

### Buzzer:
- Connect the positive side of the buzzer to pin 13.
- Connect the negative side to GND.

## Code Explanation:
### Musical Notes Frequency:
- Defined musical notes are associated with their respective frequencies (in Hertz). For example, `T_C = 262` represents the frequency of the note C (262 Hz).

### Pin Setup:
- Pins 2 to 12 are set up for pushbuttons that correspond to musical notes.
- Pin 13 is set for the buzzer, which will generate the sound when a button is pressed.

### Button Detection and Sound Generation (`loop()`):
- For each note (C, D, E, F, G, A, B), a while loop checks if the corresponding button is pressed.
- If the button is pressed (logic LOW), the program generates the corresponding tone using the `tone()` function.
- The `tone()` function outputs the frequency of the note to the buzzer, generating sound.
- Once a button is released (logic HIGH), the sound stops with `noTone(buzz)`.

### Twinkle Twinkle Little Star Notes:
- The comment at the end of the code shows the note sequence for the "Twinkle Twinkle Little Star" song.
- The musical sequence uses notes like C, G, A, F, E, D.
- This song can be played by pressing the corresponding keys on the mini piano.

## Features:
- Simple musical interface using pushbuttons to play different notes.
- The buzzer generates sound based on button presses.
- Can be extended to play simple songs, like "Twinkle Twinkle Little Star".

## Applications:
- **Educational Projects**: Learn about music and frequency generation.
- **Simple Music Instruments**: Create a DIY piano or melody generator.
- **Sound-Based Projects**: Integrate with other systems like alarms or notifications.
