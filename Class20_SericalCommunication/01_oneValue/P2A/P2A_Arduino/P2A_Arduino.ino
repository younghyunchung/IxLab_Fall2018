// IMA NYU Shanghai
// Interaction Lab

char valueFromProcessing;
int ledPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // to receive a value from Processing
  while (Serial.available()) {
    valueFromProcessing = Serial.read();
  }
  
  if (valueFromProcessing == 'H') {
    digitalWrite(ledPin, HIGH);
  } else if (valueFromProcessing == 'L') {
    digitalWrite(ledPin, LOW);
  } 
  delay(10);
}
