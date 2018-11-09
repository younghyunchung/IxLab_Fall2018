const int ledPin = 13;
int valueFromProcessing;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);    
}

void loop() {
  while (Serial.available() ) {
    valueFromProcessing = Serial.read();
  }

  if ( valueFromProcessing == 'H') {
     digitalWrite(ledPin, HIGH);
  } else if (valueFromProcessing == 'L') {
     digitalWrite(ledPin, LOW);
  }
  
  delay(100);
}
