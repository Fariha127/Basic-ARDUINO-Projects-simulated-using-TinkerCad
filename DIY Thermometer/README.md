# DIY Thermometer

This project utilizes an analog temperature sensor (like the TMP36) to measure the temperature, convert it to Fahrenheit, and use an LED indicator to signal different temperature ranges. The LED will blink with different delays based on the temperature detected, providing a simple visual representation of the temperature.

## Components Required

- Arduino board (e.g., ATtiny85 or Arduino Uno)
- TMP36 or similar temperature sensor (Analog output)
- LED
- 220Ω Resistor (for the LED)
- Breadboard and Jumper wires

## Circuit Setup

### Temperature Sensor

- Connect the **VCC** pin of the temperature sensor to **5V**.
- Connect the **GND** pin to **GND**.
- Connect the **Analog Output** pin (e.g., A0 or A1) to the **analog input pin** on your Arduino (e.g., A1).

### LED

- Connect the **anode** (long leg) of the LED to **digital pin 0** of the Arduino.
- Connect a **220Ω resistor** in series with the **cathode** (short leg) of the LED to **GND**.

## How the Project Works

### Initial Calibration

- The TMP36 outputs a voltage proportional to the temperature.
- The Arduino reads this analog voltage and converts it to a temperature in Fahrenheit using a formula based on the TMP36's characteristics.

### Temperature Detection

- The temperature value is continuously monitored.
- Depending on the temperature, the delay between LED blinks is adjusted dynamically.

### LED Feedback

- **Colder temperatures:** Faster LED blinking.
- **Hotter temperatures:** Slower LED blinking.
- This provides an intuitive, real-time visual indication of the current temperature.

## Applications

- **Room temperature monitor:** A simple way to keep track of ambient temperature.
- **Educational tool:** Great for learning about sensors, analog input, and PWM control.
- **Sensor testing:** Useful for testing and verifying analog temperature sensors like the TMP36.

## Enhancements

- **Serial Monitor Display:** Output the actual temperature reading for real-time monitoring.
- **Multiple LEDs:** Indicate different temperature ranges with different colored LEDs.
- **OLED/LCD Display:** Show numeric temperature readings on a screen for more detailed feedback.
