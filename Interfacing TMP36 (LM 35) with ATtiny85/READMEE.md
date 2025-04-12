# Project: Interfacing TMP36 with ATtiny85 for Temperature-Based LED Control

This project demonstrates how to interface the TMP36 temperature sensor with an ATtiny85 to measure the temperature and control an RGB LED. Based on the temperature reading, the RGB LED color changes to indicate different temperature ranges. The project also includes a blinking effect for extreme temperature conditions (e.g., below 9°C or above 35°C).

## Components Used:
- **ATtiny85** (microcontroller)
- **TMP36 Temperature Sensor**
- **RGB LED**
- **Resistors** (for limiting current to the LED pins)
- **Breadboard & Jumper Wires**

## Circuit Connections:
### TMP36 Sensor:
- **VCC → 5V** (or 3.3V depending on ATtiny85 operating voltage)
- **GND → GND**
- **OUT → A2** (analog pin on ATtiny85)

### RGB LED:
- **Red Pin → Pin 0** (Digital output pin on ATtiny85)
- **Green Pin → Pin 1** (Digital output pin on ATtiny85)
- **Blue Pin → Pin 2** (Digital output pin on ATtiny85)
- **Common Cathode → GND**

## Code Explanation:
### Reading Sensor Values (readSensor()):
- The **analogRead()** function is used to read the TMP36's analog voltage output.
- The voltage is converted to temperature using the TMP36 equation:

  ```plaintext
  Temp (°C) = (Voltage - 0.5) * 100
  ### Temperature-to-Color Mapping (`colorConditions()`):
Based on the temperature, the RGB LED is controlled to show different colors:

- **Below 9°C**: Blink **white** light.
- **35°C and above**: Blink **red** light.
- **10°C to 14°C**: Display **white** light.
- **15°C to 20°C**: Display **cyan** light.
- **21°C to 24°C**: Display **green** light.
- **25°C to 29°C**: Display **yellow** light.
- **Above 30°C**: Display **red** light.

### LED Control (`ledControl()`):
- This function sets the RGB pins to the appropriate state (high or low) to display the selected color.
- The `ledControlBlink()` function causes the selected color to blink with a 500ms delay.

### Continuous Loop:
- The `loop()` function continuously reads the sensor and applies the corresponding LED color based on the temperature.

## Key Features:
- **Temperature Monitoring**: Measures the temperature using the TMP36 sensor and adjusts the LED color accordingly.
- **Color Feedback**: Provides visual feedback via an RGB LED to represent different temperature ranges.
- **Blinking Effect**: Introduces blinking LED effects for extreme temperatures (below 9°C or above 35°C).

