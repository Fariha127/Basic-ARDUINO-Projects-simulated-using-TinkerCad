// C++ code
//
#define T_C 262
#define T_D 294
#define T_E 329
#define T_F 392
#define T_G 440
#define T_A 493
#define T_B 593

const int C = 2;
const int D = 4;
const int E = 6;
const int F = 7;
const int G = 9;
const int A = 11;
const int B = 12;

const int buzz = 13;


void setup()
{
  pinMode(C, INPUT);
  digitalWrite(C, HIGH);
  
  pinMode(D, INPUT);
  digitalWrite(D, HIGH);
  
  pinMode(E, INPUT);
  digitalWrite(E, HIGH);
  
  pinMode(F, INPUT);
  digitalWrite(F, HIGH);
  
  pinMode(G, INPUT);
  digitalWrite(G, HIGH);
  
  pinMode(A, INPUT);
  digitalWrite(A, HIGH);
  
  pinMode(B, INPUT);
  digitalWrite(B, HIGH);
  
}

void loop()
{
  while(digitalRead(C) == LOW)
  {
    tone(buzz,T_C);
  }
  
  while(digitalRead(D) == LOW)
  {
    tone(buzz,T_D);
  }
  
  while(digitalRead(E) == LOW)
  {
    tone(buzz,T_E);
  }
  
  while(digitalRead(F) == LOW)
  {
    tone(buzz,T_F);
  }
  
  while(digitalRead(G) == LOW)
  {
    tone(buzz,T_G);
  }
  
  while(digitalRead(A) == LOW)
  {
    tone(buzz,T_A);
  }
  
  while(digitalRead(B) == LOW)
  {
    tone(buzz,T_B);
  }
  
  noTone(buzz);
}

/*
Notes for Twinkle Twinkle Little Star
CC GG AA G
FF EE D D C
G GF F E E D
GG FF EE D
CC GG AA G
FF EE D D C
*/