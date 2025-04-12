// C++ code
//
unsigned char LED;
void setup() 
{

  for (LED = 1; LED <= 8; LED++)
  {
    pinMode(LED, OUTPUT);
  }
}

void loop() {
  
  for (LED = 1; LED <= 8; LED++) {
    digitalWrite(LED, HIGH);  // Use analogWrite for smooth dimming
    delay(300);
  }

  for (LED = 1; LED <= 8; LED++) {
    digitalWrite(LED, LOW);  // Use analogWrite for smooth dimming
    delay(300);
  }

}
