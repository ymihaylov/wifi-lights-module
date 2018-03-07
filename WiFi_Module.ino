#define DEBUG 1

const int ledPin1=21,ledPin2=2,ledPin3=4,ledPin4=22,ledPin5=23,ledPin6=19,ledPin7=18,ledPin8=13,ledPin9=16,ledPin10=17;
const int buttonPin1=33,buttonPin2=32,buttonPin3=35,buttonPin4=36,buttonPin5=39,buttonPin6=34,buttonPin7=25,buttonPin8=14,buttonPin9=27,buttonPin10=26;

int buttonState1,buttonState2,buttonState3,buttonState4,buttonState5,buttonState6,buttonState7,buttonState8,buttonState9,buttonState10;
int ledState1,ledState2,ledState3,ledState4,ledState5,ledState6,ledState7,ledState8,ledState9,ledState10;

int ledPins[] = {21, 2, 4, 22, 23, 19, 18, 13, 16, 17};
int countOfLeds = sizeof(ledPins) / sizeof(ledPins[0]);
int ledPinsStatuses[10];

int buttonPins[] = {33, 32, 35, 36, 39, 34, 25, 14, 27, 26};
int countOfButtons = sizeof(buttonPins) / sizeof(buttonPins[0]);
int buttonPinsStatuses[10];

void setup()
{
  Serial.begin(115200);
  
  for (int i = 0; i < countOfLeds; i++) {
      pinMode(ledPins[i], OUTPUT);
      digitalWrite(ledPins[i], LOW);
  }

  for (int i = 0; i < countOfButtons; i++) {
      pinMode(buttonPins[i], INPUT);
      digitalWrite(buttonPins[i], HIGH);
  }
}

void loop() {
  
  delay(20);

  for (int i = 0; i < countOfButtons; i++) {
    
    if (buttonPinsStatuses[i] != digitalRead(buttonPins[i])) { // Check for change button status
      buttonPinsStatuses[i] = digitalRead(buttonPins[i]);  // Check for button pressed
        
      if (buttonPinsStatuses[i] == LOW) {
        if (ledPinsStatuses[i] == LOW) { // Turn led on
          ledPinsStatuses[i] = HIGH;
        }
      } else {
        ledPinsStatuses[i] = LOW; // Turn led off
      }
        
      digitalWrite (ledPins[i], ledPinsStatuses[i]);
    }
  }


//  if (buttonState1 != digitalRead(buttonPin1))
//  {
//    buttonState1=digitalRead(buttonPin1);
//    if (buttonState1==LOW)
//    {
//      if (ledState1==LOW)
//      {ledState1=HIGH;}
//    else
//      {ledState1=LOW;}
//      digitalWrite (ledPin1, ledState1);
//    }
//  }
}

//void buttonChangeStatus()

