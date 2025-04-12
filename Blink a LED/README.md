# Blink an LED with Arduino

This project demonstrates how to blink an LED using an Arduino board. The LED turns on and off with a 1-second delay between each state change. This basic project is often used to verify the functionality of the board and to understand the fundamentals of using digital output pins.

## Components Used

- Arduino Board (e.g., Uno, Nano)
- LED
- Resistor (220 ohms to 1k ohms)
- Jumper Wires
- Breadboard (optional)

## Circuit Connections

- Connect the long leg (anode) of the LED to digital pin 13 on the Arduino.
- Connect the short leg (cathode) of the LED to one side of the resistor.
- Connect the other side of the resistor to GND on the Arduino.

**Note:** Arduino board pin 13 typically has a built-in LED, so you can also test this without an external LED if desired.

## Code Explanation

### LED Pin Setup

The LED is connected to digital pin 13 on the Arduino. This pin is configured as an output pin using `pinMode(LEDpin, OUTPUT);` in the `setup()` function.

### LED Blinking Logic

In the `loop()` function, the `digitalWrite()` command is used to turn the LED on and off.

- `digitalWrite(LEDpin, HIGH)` turns the LED on.
- `digitalWrite(LEDpin, LOW)` turns the LED off.

The `delay(1000)` function introduces a 1-second delay between turning the LED on and off, creating the blink effect.

### Continuous Loop

The `loop()` function continuously repeats, making the LED blink indefinitely.

## Applications

- **Basic Test for Arduino:** This is often the first program to test if the Arduino board and the LED are working properly.
- **Status Indicator:** Use an LED to indicate the status of a device or system (e.g., "ON" when blinking).
- **Learning Platform:** A great starting point for learning Arduino programming and digital output control.
