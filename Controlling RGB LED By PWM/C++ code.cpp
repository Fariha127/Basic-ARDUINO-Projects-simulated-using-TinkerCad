// C++ code
//
int redPin  = 11;
int bluePin = 10;
int greenPin = 9;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop()
{
  color(255,0,0);
  delay(1000); 
  
  color(0,255,0);
  delay(1000); 
  
  color(0,0,255);
  delay(1000); 
  
  color(255,255,255);
  delay(1000);
  
  color(0,0,0);
  delay(1000); 
}
void color(unsigned char red, unsigned char green, unsigned char blue)

{
analogWrite(redPin, red);
analogWrite(greenPin, green);
analogWrite(bluePin, blue);
}
