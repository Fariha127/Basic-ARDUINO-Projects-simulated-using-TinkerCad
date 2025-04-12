// C++ code
//
int pot = A5;
int val = 0;
int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int led6 = 8;

void setup()
{
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  
}

void loop()
{
  val = analogRead(pot);
  Serial.println(val);
  delay(500);
  
  if (val == 0)
  {
    digitalWrite(led1,0);
    digitalWrite(led2,0);
  }
  
  else if (val > 0 && val <= 350)
  {
    digitalWrite(led1,1);
    digitalWrite(led2,1);
    digitalWrite(led3,0);
    digitalWrite(led4,0);
  }
  
  else if (val > 350 && val <= 500)
  {
    digitalWrite(led3,1);
    digitalWrite(led4,1);
    digitalWrite(led5,0);
    digitalWrite(led6,0);
  }
  
  else if (val >= 501)
  {
    digitalWrite(led5,1);
    digitalWrite(led6,1);
  }
  
  
}