# Fire Alarm System

## Project Overview:
This fire alarm system monitors temperature and gas levels using sensors. If the temperature exceeds a critical threshold or gas concentration is too high, it activates a warning system (LED and buzzer).

## Components Used:
- **Temperature Sensor** (connected to A0)
  - Reads analog voltage and converts it into temperature in degrees Celsius.
  - If the temperature exceeds 80°C, the LED turns ON (fire detected).
  
- **Gas Sensor** (connected to A1)
  - Measures gas concentration in the environment.
  - If the gas sensor value is 100 or more, a buzzer (piezo) sounds an alarm.

- **LED** (Pin 13)
  - Turns ON if temperature ≥ 80°C.

- **Piezo Buzzer** (Pin 7)
  - Sounds if gas level ≥ 100.

- **Arduino Serial Monitor**
  - Displays real-time temperature and gas sensor values for monitoring.

## Code Explanation:
### `setup()` function:
- Initializes the input pins (temperature & gas sensors) and output pins (LED & buzzer).

### `loop()` function:
- **Temperature sensor reading**: Reads the temperature sensor and converts the analog value into Celsius.
- **Gas sensor reading**: Reads the gas sensor value.
- **Threshold check**: 
  - Compares the values to thresholds and activates the alarm if needed.
- **Serial Monitor output**: Prints the data on the Serial Monitor for monitoring purposes.
- **Delay**: Runs every 1 second (1000 ms delay).
