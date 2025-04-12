// C++ code
//
int LED = 11;
void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  for (int a = 0; a < 256; a++)
  {
    analogWrite(LED, a);
    delay(20); 
  }
    for (int a = 255; a >=0; a++)
  {
    analogWrite(LED, a);
    delay(20); 
  }
  delay(200);
}