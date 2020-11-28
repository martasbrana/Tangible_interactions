int led1 = 13;
int shortTime = 300;
int longTime = 900;

void setup() {
  pinMode (led1,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
//H
switchLED (shortTime);
switchLED (shortTime);
switchLED (shortTime);
switchLED (shortTime);
delay (longTime);
//I
switchLED (shortTime);
switchLED (shortTime);
delay (longTime);

//I
switchLED (shortTime);
switchLED (shortTime);
delay (longTime);

//A
switchLED (shortTime);
switchLED (longTime);
delay (longTime);
//M
switchLED (longTime);
switchLED (longTime);
delay (longTime);

//M
switchLED (longTime);
switchLED (longTime);
delay (longTime);
//A
switchLED (shortTime);
switchLED (longTime);
delay (longTime);
//R
switchLED (shortTime);
switchLED (longTime);
switchLED (shortTime);
delay (longTime);
//T
switchLED (longTime);
delay (longTime);
//A
switchLED (shortTime);
switchLED (longTime);
delay (longTime);
}

void switchLED(int timing) {
 
  digitalWrite (led1, HIGH);
  delay (timing);
  digitalWrite (led1, LOW);
  delay (shortTime);
}
