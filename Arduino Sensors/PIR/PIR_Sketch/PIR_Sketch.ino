const int LED = 6;
const int PIR = 7;
void setup() {
  pinMode(LED,OUTPUT);
  pinMode(PIR,INPUT);
  
}

void loop() {
int sensor_input = digitalRead(PIR);
if(sensor_input ==1){
  digitalWrite(LED,HIGH);
}
else{
  digitalWrite(LED,LOW);
}
}
