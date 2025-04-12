# Dimmer Circuit

This project demonstrates how to create a dimmer circuit using an Arduino to control the brightness of a bulb (or LED) with a potentiometer. The user can adjust the brightness by turning the potentiometer knob, and the Arduino will adjust the output to the bulb or LED accordingly.

## Components Used:
- Arduino Board (e.g., Uno, Nano)
- Potentiometer (10kΩ recommended)
- Bulb or LED (for displaying brightness change)
- NPN Transistor (optional, if controlling a bulb or higher power device)
- Resistors (for current limiting)
- Breadboard & Jumper Wires

## Circuit Connections:
### Potentiometer:
- Connect the middle pin to Analog Pin A0 on the Arduino.
- Connect one side pin to 5V and the other side pin to GND.

### Bulb/LED:
- Connect the positive pin of the bulb or LED to pin 9 of the Arduino (using PWM control).
- For an LED, use a current-limiting resistor (e.g., 220Ω) in series with the LED to prevent damage.
- For a bulb, you might need a transistor (e.g., NPN) to switch higher current, or you can directly control an LED for demonstration purposes.

## Code Explanation:
### Reading Potentiometer Value:
- The potentiometer's position is read using the `analogRead(potPin)` function, which returns a value between 0 and 1023 corresponding to the potentiometer's range from 0 to 5V.

### Mapping the Potentiometer Value to PWM:
- The potentiometer value is scaled to a range of 0-255 using this formula:
  write = (255.0 / 1023.0) * read;

### Adjusting the Bulb/LED Brightness:
- The `analogWrite(bulbPin, write)` function is used to output the calculated PWM value to pin 9, which adjusts the brightness of the connected bulb or LED.
- The PWM signal varies the brightness by modulating the voltage sent to the light, allowing it to smoothly change from fully off (0) to fully on (255).

### Serial Output:
- The code outputs the current brightness level to the Serial Monitor, which is helpful for debugging or tracking the real-time changes in brightness.
- The output will display the mapped potentiometer value, providing a direct relationship between the potentiometer position and the brightness level.

### Applications:
- **Lighting Control**: Create a dimmer switch for adjustable lighting.
- **Ambient Light Adjustments**: Control the intensity of light in an environment based on user preference.
- **LED Displays**: Use PWM to control brightness levels for various LEDs in projects.
- **Energy Saving**: Adjust lighting to optimal brightness levels, conserving energy when full brightness is unnecessary.
