// C++ code

#include <Servo.h>

const int trig = 7;
const int echo = 6;

Servo Myservo;

void setup()
{
  Serial.begin(9600);
  Myservo.attach(5);
  
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  
  Serial.print(" Distance ");
  Serial.print(" Measurement ");
  delay(2000);
  
}

void loop()
{
  long duration, cm;
  
  digitalWrite(trig, LOW);
  delayMicroseconds(2); 
  digitalWrite(trig, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trig, LOW);
  
  duration = pulseIn(echo, HIGH);
  
  cm = (duration/ 2)*0.0343;
  
  Serial.print(" Distance ");
  Serial.print(cm);
  Serial.print(" cm ");
  delay(100);
  
  if(cm >= 10)
  {
    Myservo.write(0);
  }
  
  else
  {
    Myservo.write(90);
  }
  
  Serial.println();
  delay(100);
  
}
