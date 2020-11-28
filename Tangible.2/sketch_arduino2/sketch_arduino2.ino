
int LEDGr =2;
int LEDRd = 13; 
float sensor;

void setup() {
  Serial.begin(9600);
  pinMode(LEDGr, OUTPUT);
  pinMode(LEDRd, OUTPUT);

}

void loop() {
sensor = analogRead (2); 
Serial.println(sensor);
if(sensor < 250){
  digitalWrite( LEDGr, HIGH);
  digitalWrite( LEDRd, LOW);
}else if(sensor>= 250 && sensor < 500)
{
  digitalWrite( LEDGr, LOW);
  digitalWrite( LEDRd, HIGH);
  }else if(sensor >= 500 && sensor < 600){
    digitalWrite (LEDRd, LOW);
    digitalWrite( LEDGr, HIGH);
    delay (1000);
  digitalWrite( LEDRd, LOW);
     delay (1000);
    }
}
