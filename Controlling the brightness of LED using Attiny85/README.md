# Controlling the Brightness of an LED using ATtiny85

This project demonstrates how to control the brightness of an LED based on the reading from a potentiometer using the ATtiny85 microcontroller. It uses PWM (Pulse Width Modulation) to adjust the brightness of the LED, providing a smooth dimming effect.

## Components Used

- ATtiny85 Microcontroller
- LED
- 220Ω Resistor
- Potentiometer (10kΩ recommended)
- Breadboard and Jumper Wires

## Circuit Connections

### LED Pin

- Connect the anode (longer leg) of the LED to pin 0 of the ATtiny85.
- Connect a 220Ω resistor in series with the cathode (shorter leg) of the LED to GND.

### Potentiometer

- Connect one side of the potentiometer to 5V and the other to GND.
- Connect the wiper (middle terminal) to A3 (Analog input pin) of the ATtiny85.

## Code Explanation

### Pin Setup

- The LED is connected to pin 0, and the potentiometer is read from the A3 pin.
- The `pinMode()` function is used to set the LED as an output and the potentiometer pin as an input.

### Reading the Potentiometer

- The `analogRead()` function reads the voltage from the potentiometer, which will vary from 0 (lowest value) to 1023 (highest value).

### Mapping the Potentiometer Value

- The `map()` function maps the potentiometer reading (0 to 1023) to a range of 0 to 255, which corresponds to the PWM values that control the LED brightness.

### Controlling the LED Brightness

- The `analogWrite()` function is used to write a PWM signal to the LED.
- The PWM value controls the brightness, with 0 being off and 255 being full brightness.

## Project Flow

- **Potentiometer Input:** As you turn the potentiometer, the analog value changes from 0 to 1023 based on its position.
- **Mapping:** The analog value is mapped to a range of 0 to 255 to be compatible with PWM control.
- **LED Brightness Control:** The PWM value is sent to the LED, adjusting its brightness based on the potentiometer position.
- **Continuous Adjustment:** The process repeats continuously, allowing real-time adjustment of the LED brightness.

## Enhancements

- **Adding Multiple LEDs:** Use multiple LEDs connected to other pins of the ATtiny85, adjusting the brightness of each using separate potentiometers.
- **LED Fade Effect:** Implement a fade-in or fade-out effect by gradually changing the PWM value over time.
- **Use of Different Sensors:** Replace the potentiometer with sensors like a photoresistor or temperature sensor to control the LED brightness based on environmental factors.
