// C++ code
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

float voltage = 0.0;
float temp = 0.0, r1 = 90900, r2 = 10000;
int analog_value = 0;

void setup()
{
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("Digital voltmeter");
}

void loop()
{
  analog_value = analogRead(A0);
  temp = (analog_value*5.0)/1024.0;
  voltage = temp / (r2/(r1 + r2));
  
  lcd.setCursor(0, 1);
  Serial.println(voltage);
  lcd.print(voltage);
  
  delay(300); 
}