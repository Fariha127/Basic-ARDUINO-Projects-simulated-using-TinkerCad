#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

int red = 10;
int green = 11;
int buzz = 12;

char keys[ROWS][COLS] = 
{
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};

String password = "0305"; // Correct passcode
String vstup = ""; // Input string

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(buzz, OUTPUT);
  digitalWrite(red, HIGH); // Red LED on by default (access denied)
  digitalWrite(green, LOW);
  
  Serial.begin(9600);
  Serial.println("Enter Passcode: ");
}

void loop()
{
  char key = keypad.getKey();

  if (key) // If a key is pressed
  {
    if (vstup.length() < 4)
    {
      Serial.print('*'); // Print * instead of actual key
      vstup += key;
    }
  }

  if (vstup.length() == 4) // When 4 digits are entered
  {
    delay(500); // Short delay to avoid double reading

    if (password == vstup) // If passcode is correct
    {
      Serial.println("\nAccess Granted");
      digitalWrite(red, LOW);
      digitalWrite(green, HIGH);
      
      tone(buzz, 500);
      delay(100);
      noTone(buzz);
    }
    else // If incorrect passcode
    {
      Serial.println("\nWrong Passcode!");
      digitalWrite(red, HIGH);
      digitalWrite(green, LOW);
      
      for (int i = 0; i < 2; i++) // Two buzz sounds for incorrect passcode
      {
        tone(buzz, 1000);
        delay(800);
        noTone(buzz);
        delay(200);
      }
    }

    delay(1000);
    vstup = ""; // Reset input
    Serial.println("\nEnter Passcode: ");
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
  }
}
