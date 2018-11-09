import processing.serial.*;

Serial myPort;
int val;



void setup() {
  size(500, 500);
  background(0);
  printArray(Serial.list());
  
  myPort = new Serial(this, Serial.list()[ 3 ], 9600);
  
  
  
}

void draw() {
  while ( myPort.available() > 0 ) {
    val = myPort.read();
  }
  
  println(val);
  
  if (val == 0) {
    background(0);
  } else if (val == 1) {
    background(255);
  }
    
    
}
