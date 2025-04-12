// C++ code
#include <LiquidCrystal.h>
#include <Servo.h>

Servo S1, S2;
#define IR_Slot1 7
#define IR_Slot2 8
#define IR_entry 6
#define IR_exit 13

int pos = 0;
LiquidCrystal lcd (12, 11, 5, 4, 3, 2);

void setup()
{
  S1.attach(10);
  S2.attach(9);
  
  S1.write(pos);
  S2.write(pos);
  
  pinMode(IR_Slot1, INPUT);
  pinMode(IR_Slot2, INPUT);
  pinMode(IR_entry, INPUT);
  pinMode(IR_exit, INPUT);
  
  lcd.begin (16, 2);
  lcd.print(" Smart Parking");
  lcd.setCursor(0, 1);
  lcd.print("    System");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Slot 1 = Available");
  lcd.setCursor(0, 1);
  lcd.print("Slot 2 = Available");
  delay(2000);
  
  
  
}

void loop()
{
  if(digitalRead(IR_Slot1)==HIGH)
  {
    lcd.setCursor(0, 0);
    lcd.print("Slot 1 = Not Available");
  }
  else
  {
    lcd.setCursor(0, 0);
    lcd.print("Slot 1 = Available");
  }
  
  
  if(digitalRead(IR_Slot2)==HIGH)
  {
    lcd.setCursor(0, 1);
    lcd.print("Slot 2 = Not Available");
  }
  else
  {
    lcd.setCursor(0, 1);
    lcd.print("Slot 2 = Available");
  }
  
  
  if(digitalRead(IR_entry)==HIGH)
  {
    S1.write(pos+90);
  }
  else
  {
    S1.write(pos);
  }
  
  
  if(digitalRead(IR_exit)==HIGH)
  {
    S2.write(pos+90);
  }
  else
  {
    S2.write(pos);
  }
  
}
