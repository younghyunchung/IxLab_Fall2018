// IMA NYU Shanghai
// Interaction Lab
// This code sends one value from Processing to Arduino 

import processing.serial.*;

Serial myPort;


void setup() {
  size(500, 500);
  background(0);

  printArray(Serial.list());
  // this prints out the list of all available serial ports on your computer.
  
  myPort = new Serial(this, Serial.list()[ 3 ], 9600);
  // WARNING!
  // You will definitely get an error here.
  // Change the PORT_INDEX to 0 and try running it again.
  // And then, check the list of the ports,
  // find the port "/dev/cu.usbmodem----" or "/dev/tty.usbmodem----" 
  // and replace PORT_INDEX above with the index number of the port.
}


void draw() {
  // to send a value to the Arduino
  if (mousePressed) {
    myPort.write('H');
  } else {
    myPort.write('L');
  }
}
