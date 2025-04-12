// C++ code
int potPin = A0;
int bulbPin = 9;
int read, write;
void setup()
{
  pinMode(potPin, INPUT);
  pinMode(bulbPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  read = analogRead(potPin);
  write = (255.0/1023.0)*read;
  analogWrite(bulbPin, write);
  Serial.print("You are writing a value of ");
  Serial.println(write);
}