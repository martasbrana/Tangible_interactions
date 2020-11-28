
import processing.serial.*;     
Serial myPort;                  

float xpos, ypos;  // Starting position of the ball

void setup() {
  size(640, 480);

  // List all the available serial ports
  // if using Processing 2.1 or later, use Serial.printArray()
  println(Serial.list());
for (int x = 0; x < Serial.list().length; x ++) {
  println (" [" + x + "] " +  Serial.list() [x]);
  }
  // I know that the first port in the serial list on my Mac is always my
  // Arduino board, so I open Serial.list()[0].
  // Change the 0 to the appropriate number of the serial port that your
  // microcontroller is attached to.
  myPort = new Serial(this, Serial.list()[0], 9600);

  // read bytes into a buffer until you get a linefeed (ASCII 10):
  myPort.bufferUntil('\n');

  // draw with smooth edges:
  smooth();
}

void draw() {
  // Draw the shape
  ellipse(xpos, ypos, 20, 20);
  
    //randomizing colour
  if (xpos > width/3) {
    fill( random(255), random(255), random(255), random(255));
    } else { fill (0, 255, 255);
      }
}
