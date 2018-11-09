const int buttonPin = 2;
const int ledPin = 13;

boolean oldSwitchState = LOW;
boolean newSwitchState = LOW;

boolean LEDstatus = LOW;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);

  digitalWrite(ledPin, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  newSwitchState = digitalRead(buttonPin);

  if (newSwitchState != oldSwitchState ) {
    if (newSwitchState == HIGH ) {
      if (LEDstatus == LOW ) {
        LEDstatus = HIGH;
      } else {
        LEDstatus = LOW;
      }
      digitalWrite(ledPin, LEDstatus);
    }
    oldSwitchState = newSwitchState;
  }

  delay(20);

  //Serial.print(buttonState);
  //  Serial.print(oldSwitchState);
  //  Serial.print(" ");
  //  Serial.print(newSwitchState);
  //  Serial.print(" ");
  //  Serial.println(LEDstatus);
  Serial.write(LEDstatus);

}
