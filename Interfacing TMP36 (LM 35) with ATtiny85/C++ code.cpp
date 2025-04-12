// C++ code
//
const float baselineTem = 20.0;
const int sensorPin = A2, redPin = 0, bluePin = 1, greenPin = 2;
float temp;
bool yellow[] = {1, 1, 0}, red[] = {1, 0, 0}, white[] = {1, 1, 1},  green[] = {0, 1, 0}, blue[] = {0, 0, 1}, cyan[] = {0, 1, 1}, off[] = {0, 0, 0};
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(5, OUTPUT);
  digitalWrite(5, HIGH);
}

void loop()
{
  readSensor();
  colorConditions();
}

void colorConditions()
{
  if (temp <= 9) ledControlBlink(white);
  if (temp >=35) ledControlBlink(red);
  if (temp >=10 && temp <=14.0) ledControl(white);
  if (temp >=15.0 && temp <=20.0) ledControl(cyan);
  if (temp >=21 && temp <=24) ledControl(green);
  if (temp >=25 && temp <=29) ledControl(yellow);
  if (temp >=30) ledControl(red);  
}

void ledControl (bool color [])
{
  digitalWrite (redPin,   color [0]);
  digitalWrite (greenPin, color [1]);
  digitalWrite (bluePin,  color [2]);
}

void ledControlBlink(bool color[])
{
  ledControl(color);
  delay(500);
  ledControl(off);
  delay(500);
}
void readSensor() 
{
  int sensor = analogRead(sensorPin);
  float volt = sensor *3.0;
  volt /= 1024.0;
  temp = (volt - 0.5) *100;
}