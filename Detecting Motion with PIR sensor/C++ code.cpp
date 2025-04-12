// C++ code
//
int pir = 13;
int led = 12;
bool pir_value = false;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(pir, INPUT);
 
}

void loop()
{
  pir_value = digitalRead(pir);
  digitalWrite(led, HIGH);
  
  if (pir_value == HIGH)
  {
    Serial.println("Motion Detected");
    digitalWrite(led, HIGH);
  }
  
  else
  {
    Serial.println("No Motion Detected");
    digitalWrite(led, LOW);
  }
  
}
