# Project: Interfacing Temperature Sensor and LCD with Arduino

This project demonstrates how to use an analog temperature sensor with an Arduino to measure temperature and display it on a 16x2 LCD screen. The temperature sensor’s analog output is read by the Arduino, converted to a voltage value, and then converted to a temperature in Fahrenheit using a simple formula. The result is displayed on the LCD.

## Components Used:
- **Arduino Board** (e.g., Uno, Mega)
- **10k Ohm Thermistor or Analog Temperature Sensor**
- **16x2 LCD Display**
- **Jumper Wires**
  
## Code Explanation:

1. **LCD Initialization**: The `LiquidCrystal` object is initialized with specific Arduino pins connected to the LCD display (pins 12, 11, 5, 4, 3, 2).
2. **Reading Temperature**: The temperature sensor’s analog value is read from pin A0 using `analogRead(A0)` and stored in the `degree` variable.
3. **Converting to Voltage**: The `degree` value (ranging from 0 to 1023) is scaled to a voltage using the formula:  
   `(degree / 1024) * 5` (voltage between 0 and 5V).
4. **Calculating Temperature**: The voltage is adjusted by subtracting 0.5V (for a typical thermistor sensor), then multiplied by 100 to convert it to Celsius. After that, it is converted to Fahrenheit with the formula:  
   `F = 1.8 * (Celsius) + 32`.
5. **Displaying Temperature**: The result is displayed on the LCD screen, including the degree symbol (`char(178)`), which is printed alongside the temperature value.
6. **Loop**: The program continuously updates the LCD with the temperature reading every time `loop()` runs.

This code effectively demonstrates how to read and display temperature data from a sensor on an LCD.

## Features:
- **Temperature display** in Fahrenheit.
- **Real-time updates** shown on an LCD screen.
  
## Applications:
- **Temperature monitoring** for home automation, HVAC systems, or weather stations.
- **Educational projects** for learning about analog sensors and LCD interfacing.
