#include <Servo.h>

Servo myservo;
int sensor = 0;
int val;   

float sensorReduced = 0;

int state = 0;


void setup() {
 myservo.attach(9);
 Serial.begin (9600);
}

void loop() {
 
  val = analogRead(sensor);
  Serial.println(val);

   if (val > 300) {
   if (state == 0){
    state = 1;
    for (int x = 0; x < 180; x ++) {
    myservo.write(x);
     delay(30);
   }
}
}else {
  if (state == 1) {
    state = 0;
    for (int x = 179; x> 0; x --) {
      myservo.write(x);
      delay(30);
    }
  }
}
}
