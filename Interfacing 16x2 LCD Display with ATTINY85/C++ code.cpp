// C++ code
//
#include <LiquidCrystal.h>

LiquidCrystal lcd(0, 1, 2, 3, 4, 5);



void setup()
{
  lcd.begin(16, 2);
  lcd.print("This is me!");
  lcd.setCursor(0, 1);
  lcd.print("Hello!");
}

void loop()
{
  lcd.setCursor(14, 1);
  lcd.print(millis() / 1000);
  
  delay(100); 
}