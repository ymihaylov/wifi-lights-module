

const int ledPin1=21,ledPin2=2,ledPin3=4,ledPin4=22,ledPin5=23,ledPin6=19,ledPin7=18,ledPin8=13,ledPin9=16,ledPin10=17;
const int buttonPin1=33,buttonPin2=32,buttonPin3=35,buttonPin4=36,buttonPin5=39,buttonPin6=34,buttonPin7=25,buttonPin8=14,buttonPin9=27,buttonPin10=26;

int buttonState1,buttonState2,buttonState3,buttonState4,buttonState5,buttonState6,buttonState7,buttonState8,buttonState9,buttonState10;
int ledState1,ledState2,ledState3,ledState4,ledState5,ledState6,ledState7,ledState8,ledState9,ledState10;

void setup()
{

  pinMode(ledPin1, OUTPUT); pinMode (ledPin2, OUTPUT); pinMode (ledPin3, OUTPUT); pinMode (ledPin4, OUTPUT); pinMode (ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT); pinMode (ledPin7, OUTPUT); pinMode (ledPin8, OUTPUT); pinMode (ledPin9, OUTPUT); pinMode (ledPin10, OUTPUT);

  pinMode(buttonPin1, INPUT); pinMode(buttonPin2, INPUT); pinMode(buttonPin3, INPUT); pinMode(buttonPin4, INPUT); pinMode(buttonPin5, INPUT);
  pinMode(buttonPin6, INPUT); pinMode(buttonPin7, INPUT); pinMode(buttonPin8, INPUT); pinMode(buttonPin9, INPUT); pinMode(buttonPin10, INPUT);

  digitalWrite(ledPin1, LOW); digitalWrite(ledPin2, LOW); digitalWrite(ledPin3, LOW); digitalWrite(ledPin4, LOW); digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW); digitalWrite(ledPin7, LOW); digitalWrite(ledPin8, LOW); digitalWrite(ledPin9, LOW); digitalWrite(ledPin10, LOW);
}

void loop() {
  delay(20);

  if (buttonState1 != digitalRead(buttonPin1))  //проверява има ли промяна в статуса на бутона
  {
    buttonState1=digitalRead(buttonPin1);  //проверява за натиснат бутон
    if (buttonState1==LOW)
    {
      if (ledState1==LOW)   // ако LED-а е бил изключен го включва
      {ledState1=HIGH;}
    else
      {ledState1=LOW;}      // ако LED-а е бил включен го изключва
      digitalWrite (ledPin1, ledState1);
    }
  }

  if (buttonState2 != digitalRead(buttonPin2))
  {
    buttonState2=digitalRead(buttonPin2);
    if (buttonState2==LOW)
    {
      if (ledState2==LOW)
      {ledState2=HIGH;}
    else
      {ledState2=LOW;}
      digitalWrite (ledPin2, ledState2);
    }
  }

  if (buttonState3 != digitalRead(buttonPin3))
  {
    buttonState3=digitalRead(buttonPin3);
    if (buttonState3==LOW)
    {
      if (ledState3==LOW)
      {ledState3=HIGH;}
    else
      {ledState3=LOW;}
      digitalWrite (ledPin3, ledState3);
    }
  }

    if (buttonState4 != digitalRead(buttonPin4))
  {
    buttonState4=digitalRead(buttonPin4);
    if (buttonState4==LOW)
    {
      if (ledState4==LOW)
      {ledState4=HIGH;}
    else
      {ledState4=LOW;}
      digitalWrite (ledPin4, ledState4);
    }
  }

  if (buttonState5 != digitalRead(buttonPin5))
  {
    buttonState5=digitalRead(buttonPin5);
    if (buttonState5==LOW)
    {
      if (ledState5==LOW)
      {ledState5=HIGH;}
    else
      {ledState5=LOW;}
      digitalWrite (ledPin5, ledState5);
    }
  }

  if (buttonState6 != digitalRead(buttonPin6))
  {
    buttonState6=digitalRead(buttonPin6);
    if (buttonState6==LOW)
    {
      if (ledState6==LOW)
      {ledState6=HIGH;}
    else
      {ledState6=LOW;}
      digitalWrite (ledPin6, ledState6);
    }
  }

  if (buttonState7 != digitalRead(buttonPin7))
  {
    buttonState7=digitalRead(buttonPin7);
    if (buttonState7==LOW)
    {
      if (ledState7==LOW)
      {ledState7=HIGH;}
    else
      {ledState7=LOW;}
      digitalWrite (ledPin7, ledState7);
    }
  }

  if (buttonState8 != digitalRead(buttonPin8))
  {
    buttonState8=digitalRead(buttonPin8);
    if (buttonState8==LOW)
    {
      if (ledState8==LOW)
      {ledState8=HIGH;}
    else
      {ledState8=LOW;}
      digitalWrite (ledPin8, ledState8);
    }
  }

  if (buttonState9 != digitalRead(buttonPin9))
  {
    buttonState9=digitalRead(buttonPin9);
    if (buttonState9==LOW)
    {
      if (ledState9==LOW)
      {ledState9=HIGH;}
    else
      {ledState9=LOW;}
      digitalWrite (ledPin9, ledState9);
    }
  }

  if (buttonState10 != digitalRead(buttonPin10))
  {
    buttonState10=digitalRead(buttonPin10);
    if (buttonState10==LOW)
    {
      if (ledState10==LOW)
      {ledState10=HIGH;}
    else
      {ledState10=LOW;}
      digitalWrite (ledPin10, ledState10);
    }
  }
}

