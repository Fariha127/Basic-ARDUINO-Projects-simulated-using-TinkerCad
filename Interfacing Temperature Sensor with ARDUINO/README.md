# Project: Interfacing a Temperature Sensor with Arduino

This project demonstrates how to interface a temperature sensor (e.g., LM35, TMP36) with an Arduino to measure temperature in Celsius and Fahrenheit. The sensor outputs an analog voltage corresponding to the ambient temperature, which is read and processed by the Arduino.

## Components Used:
- **Arduino Board** (Uno, Mega, etc.)
- **Temperature Sensor** (LM35 or TMP36)
- **Connecting Wires**
- **Breadboard** (Optional)

## Circuit Connections:
- **VCC (Power Pin)** → 5V on Arduino
- **GND (Ground Pin)** → GND on Arduino
- **VOUT (Signal Pin)** → A0 on Arduino

## Key Features:
- **Analog Temperature Measurement**: The Arduino reads the analog voltage from the temperature sensor to calculate the temperature.
- **Celsius and Fahrenheit Readings**: The Arduino can convert and display the temperature in both Celsius and Fahrenheit.
- **Real-Time Data**: Temperature readings are continuously updated and can be displayed on a Serial Monitor.
- **Low Power Consumption**: The LM35 or TMP36 sensor consumes low power, making it ideal for battery-powered applications.

## Applications:
- **Weather Stations**: Use the sensor to monitor ambient temperature in a weather station setup.
- **Temperature Monitoring Systems**: Ideal for any application requiring temperature monitoring, such as in industrial equipment, aquariums, or greenhouses.
- **Home Automation**: The system can be used to trigger actions based on temperature (e.g., turning on a fan or heater).
- **Educational Projects**: Perfect for learning about sensors, analog-to-digital conversion, and Arduino programming.
