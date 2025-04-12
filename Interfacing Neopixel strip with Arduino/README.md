# Interfacing NeoPixel LED Strip with Arduino

## Project Overview:
This project demonstrates how to control a NeoPixel LED strip (WS2812B) using an Arduino. The LEDs are programmed to create a chasing light effect, where colors cycle through Red, Green, and Blue.

## Components Used:
- **Arduino Board** (Uno, Mega, etc.)
- **NeoPixel LED Strip** (WS2812B) with 4 LEDs
- **Power Source** (5V from Arduino or an external power supply)
- **Resistor** (Optional, ~330Ω on data line for signal protection)
- **Capacitor** (Optional, 1000µF across power lines for stability)

## Circuit Connections:
- **NeoPixel Strip**: Connect the data input of the strip to **Pin 6** on the Arduino.
- Ensure the **5V** and **GND** lines of the NeoPixel strip are connected to the Arduino's **5V** and **GND**.
- Use a **330Ω resistor** on the data line to protect the signal if desired.
- Optionally, place a **1000µF capacitor** across the power lines to prevent power spikes.

## Code Explanation:
### Library Inclusion:
- Uses the **Adafruit_NeoPixel** library to control the LED strip.

### Hardware Setup:
- The **NeoPixel strip** is connected to **Pin 6** on the Arduino.
- The strip has **4 LEDs** in the setup.

### Chase Effect Function (`chase()`):
- Moves a glowing effect across the LED strip.
- Turns the next LED **ON** while turning the previous one **OFF**.
- Repeats the pattern for **Red**, **Green**, and **Blue** colors.

### Loop Execution:
- The colors change sequentially (Red → Green → Blue), creating a smooth chasing effect across the LED strip.

## Features:
- **Chasing Light Effect**: LEDs light up in a moving sequence, creating a chasing effect with Red, Green, and Blue colors.
- **Simple Control**: Uses the **Adafruit_NeoPixel** library for easy control of the LED strip.

## Applications:
- **Decorative Lighting**: Use the chasing light effect for ambient lighting or holiday decorations.
- **Visual Indicators**: Represent data or status with different colors and effects on the LED strip.
- **Interactive Projects**: Add visual feedback to interactive projects using NeoPixels.
