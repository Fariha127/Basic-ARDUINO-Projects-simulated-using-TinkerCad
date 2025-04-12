# Project: Interfacing 16x2 LCD Display with ATtiny85

This project demonstrates how to interface a 16x2 LCD display with an ATtiny85 microcontroller. The display shows a simple message, and the microcontroller also updates the display with the time in seconds since the program started, using the `millis()` function.

## Components Used:
- **ATtiny85 Microcontroller**
- **16x2 LCD Display**
- **Jumper Wires**
- 
## Code Explanation:

1. **Initialization**: The `LiquidCrystal` library is initialized with the ATtiny85's pins connected to the LCD (pins 0, 1, 2, 3, 4, 5). The LCD is set up in the `setup()` function to display initial messages.
2. **Display Messages**: In the `setup()`, it prints "This is me!" on the first line and "Hello!" on the second line of the LCD.
3. **Time Display**: The `loop()` function continuously updates the LCD to show the number of seconds passed since the program started, using `millis()`, which gives the elapsed time in milliseconds divided by 1000 to convert it to seconds. 
4. **Delay**: The `delay(100)` ensures the time updates at regular intervals.

## Features:
- **Displays static text** like "This is me!" and "Hello!".
- **Real-time counter** showing the seconds since the program started.

## Applications:
- **Small-scale projects**: A great example for learning how to interface an LCD with a tiny microcontroller.
- **Timer-based systems**: Could be expanded for various timing applications.
