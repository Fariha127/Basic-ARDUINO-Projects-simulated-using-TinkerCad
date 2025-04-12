// C++ code

int green = 9;
int blue = 10;
int red = 11;
int buzzer = 3;
int pir = 13;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(pir, INPUT);
  
  digitalWrite(red, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(green, LOW);
  digitalWrite(buzzer, LOW);
  digitalWrite(pir, LOW);
}

void loop()
{
  if(digitalRead(pir) == HIGH)
  {
    digitalWrite(buzzer, HIGH);
    color(0,0,255); // blue
    while(digitalRead(pir) == HIGH);
  }
  
  else
  {
    digitalWrite(buzzer, LOW);
    color(255,0,255); // magenta
   
  }
}

void color(unsigned char redv, unsigned char greenv, unsigned char bluev)

{
analogWrite(red, redv);
analogWrite(green, greenv);
analogWrite(blue, bluev);
}
  
  
 