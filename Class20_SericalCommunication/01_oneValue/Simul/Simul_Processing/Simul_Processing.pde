// IMA NYU Shanghai
// Interaction Lab

import processing.serial.*;
Serial myPort;

int valueFromArduino = 0;

void setup() {
  size(500, 500);
  background(0);

  printArray(Serial.list());  
  myPort = new Serial(this, Serial.list()[ 3 ], 9600);
}

void draw() {
  background(0);
  while (myPort.available() > 0) {
    valueFromArduino = myPort.read();
  }
  println(valueFromArduino);
  ellipse(width/2, height/2, valueFromArduino, valueFromArduino);
  
  // to send a value to the Arduino
  if (mousePressed) {
    myPort.write('H');
  } else {
    myPort.write('L');
  }
}
