void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0)/4;
  //Serial.println(sensorValue);
  Serial.write(sensorValue);
  delay(100);
}
