import processing.serial.*;

Serial myPort;
int valueFromArduino;

void setup() {
  size(500, 500);
  background(0);
  printArray(Serial.list());
  myPort = new Serial(this, Serial.list()[ 3 ], 9600);
}

void draw() {
  while( myPort.available() > 0) {
    valueFromArduino = myPort.read();
    println(valueFromArduino);
    background(0);
    ellipse(valueFromArduino*2, mouseY, 50, 50);
    
  }
}
