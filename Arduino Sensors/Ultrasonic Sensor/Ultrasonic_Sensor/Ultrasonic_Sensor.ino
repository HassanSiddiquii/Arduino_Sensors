const int uds=4;
void setup(){
  pinMode(13,OUTPUT);
}


void loop(){
float uds_value;
  pinMode(uds, OUTPUT);
  digitalWrite(uds, LOW);
  digitalWrite(uds, HIGH);
  digitalWrite(uds, LOW);
  
  pinMode(uds, INPUT);
  uds_value = pulseIn(uds, HIGH);
  float distance_in_cm = uds_value/29/2;
  
  
  if(distance_in_cm > 60){
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
    }
    }
