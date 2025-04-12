// C++ code
//

int pot = 0;
int led = 0;
int sensorPin = A3;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(sensorPin, INPUT);
}

void loop()
{
  pot = analogRead(sensorPin);
  pot = map(pot, 0, 1023, 0, 255);
  analogWrite(led, pot);
}