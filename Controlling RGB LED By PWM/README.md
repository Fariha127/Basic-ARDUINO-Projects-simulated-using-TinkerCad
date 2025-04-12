# Controlling RGB LED with PWM

This project demonstrates how to control an RGB LED using Pulse Width Modulation (PWM) on an Arduino. The RGB LED can display different colors by varying the intensity of each of its three color components (Red, Green, and Blue). Using PWM, the brightness of each color can be adjusted.

## Components Used

- Arduino Board (e.g., Uno, Nano)
- RGB LED (Common Cathode or Common Anode)
- 3 Resistors (Typically 220Ω or 330Ω for each color pin of the RGB LED)
- Breadboard and Jumper Wires

## Circuit Connections

- Red Pin of RGB LED to pin 11 on Arduino.
- Green Pin of RGB LED to pin 9 on Arduino.
- Blue Pin of RGB LED to pin 10 on Arduino.
- Common Cathode or Anode to GND (if common cathode) or 5V (if common anode).
- Connect 220Ω resistors between the Arduino pins and the RGB LED pins to limit the current.

## Code Explanation

### Pin Setup

The Red, Green, and Blue pins of the RGB LED are connected to pins 11, 9, and 10 of the Arduino, respectively. These pins are set as OUTPUT using the `pinMode()` function.

### Color Control

The `color()` function is used to set the intensity of the Red, Green, and Blue components of the RGB LED. The function uses `analogWrite()` to control the brightness of each color through PWM.

- PWM: This function generates a signal between 0 (off) and 255 (full brightness) to control the brightness levels of each color.

### Loop Logic

The loop alternates between the primary colors (Red, Green, Blue), all colors combined (White), and off (Black). Each color is displayed for 1 second before switching to the next one.

- Red: `color(255, 0, 0)` – Full intensity of the red color.
- Green: `color(0, 255, 0)` – Full intensity of the green color.
- Blue: `color(0, 0, 255)` – Full intensity of the blue color.
- White: `color(255, 255, 255)` – All colors at full intensity (White).
- Off: `color(0, 0, 0)` – All colors are off.

### PWM Control

The function `analogWrite(pin, value)` is used to generate a PWM signal on the given pin, where `value` ranges from 0 (off) to 255 (full brightness). This allows the RGB LED to display various colors by adjusting the intensity of the red, green, and blue LEDs.

## Project Flow

### Cycle Through Colors

The loop continuously cycles through the following colors in sequence:

- Red
- Green
- Blue
- White (Combination of Red, Green, and Blue)
- Off

### Color Mixing

By using different values for each color channel, the RGB LED can display any color in the spectrum. For example:

- Purple: `color(255, 0, 255)` (Red + Blue)
- Yellow: `color(255, 255, 0)` (Red + Green)
- Cyan: `color(0, 255, 255)` (Green + Blue)

### PWM Control

The `analogWrite()` function gives fine control over the brightness of each LED color channel, which is why it can generate a variety of colors by mixing different intensities.

## Enhancements

- **Color Mixing with Variables:** You can create variables to control the red, green, and blue intensity dynamically, allowing for a range of color effects.
- **Color Fade Effect:** Implement smooth transitions between colors using `analogWrite()` in combination with `delay()` or a timing function.
- **Interactive Control:** Use a potentiometer, buttons, or a sensor to dynamically change the color of the RGB LED based on user input.
- **Arduino RGB LED Strip:** Extend this project to control a strip of RGB LEDs for more advanced lighting effects.
