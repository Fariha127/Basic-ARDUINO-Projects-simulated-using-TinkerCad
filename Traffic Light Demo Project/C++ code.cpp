// C++ code
//
int buttonState = 0;
int const buttonPin = 2;
int red    = 13;
int yellow = 12;
int green  = 11;
void setup()
{
  pinMode(red,    OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green,  OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  if (buttonState == 1)
  { 
    digitalWrite(red, 1);
    Serial.print("STOP\n");
    delay(2000); 
    
    digitalWrite(red, 0);
    delay(500);
    
    digitalWrite(yellow, 1);
    Serial.print("GET READY\n");
    delay(2000);
    
    digitalWrite(yellow, 0);
    delay(500);
    
    digitalWrite(green, 1);
    Serial.print("GO\n");
    delay(2000);
    
    digitalWrite(green, 0);
   
}
  
}