# Controlling Multiple LEDs Using a Potentiometer

This project demonstrates how to use a potentiometer to control the brightness and behavior of multiple LEDs. As you turn the potentiometer, the Arduino adjusts which LEDs are turned on based on the potentiometer's value. This creates a visual effect that can represent different brightness levels or stages.

## Components Used

- Arduino Board (e.g., Uno, Nano)
- Potentiometer (for adjusting the control value)
- 6 LEDs (for displaying different levels of intensity or stages)
- Resistors (220Ω resistors for current-limiting for each LED)
- Breadboard & Jumper Wires

## Circuit Connections

### Potentiometer

- Connect the middle pin of the potentiometer to Analog Pin A5 on the Arduino.
- Connect one side pin of the potentiometer to 5V and the other side pin to GND.

### LEDs

- Connect each LED to digital pins 13, 12, 11, 10, 9, and 8 on the Arduino.
- Use current-limiting resistors (e.g., 220Ω) in series with each LED to protect them from excessive current.

## Code Explanation

### Reading Potentiometer Value

- The `analogRead(pot)` function reads the value from the potentiometer, which ranges from 0 to 1023. This value corresponds to the potentiometer's position.

### Controlling LEDs Based on Potentiometer Value

- The code checks the potentiometer value and turns on different LEDs depending on the value.

### LED Control Ranges

- 0 to 350: LEDs 1 and 2 are on.
- 351 to 500: LEDs 3 and 4 are on.
- 501 and above: LEDs 5 and 6 are on.

- The LEDs are turned on by writing a HIGH value to the corresponding digital pins and turned off by writing a LOW value.

### Serial Monitor

- The `val` (potentiometer reading) is printed to the Serial Monitor every 500ms for debugging purposes.

### LED Transitions

- As the potentiometer is turned, the LED groupings change. This can be used to represent different stages, such as progress indicators or brightness levels.

## Features

- **Visual Feedback:** The potentiometer provides real-time control over the LEDs, and each value range activates different LED groups.
- **Simple User Interface:** Adjusting the potentiometer provides a smooth transition between stages.
- **Serial Monitor:** The potentiometer's reading is displayed on the serial monitor for debugging or observation.

## Applications

- **Stage Lighting Control:** Simulate different stages or levels of lighting intensity for small light control systems.
- **Visual Indicators:** Use this concept for indicating the level of some variable (e.g., battery charge, temperature, etc.) with LED stages.
- **Interactive Display:** Use LEDs to represent different stages in an interactive system, such as a level indicator or progress bar.
