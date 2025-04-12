int trigPin = 10;
int echoPin = 9;
long time;
int distance;
void setup()
{
  pinMode(10, OUTPUT);
  pinMode(9, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(10, LOW);
  delayMicroseconds(2); 
  
  digitalWrite(10, HIGH);
  delayMicroseconds(10);
  digitalWrite(10, LOW);
  
  time = pulseIn(9, HIGH);
  distance = time*0.034/2;
  
  Serial.print("Distance: ");
  Serial.print(distance);
 }