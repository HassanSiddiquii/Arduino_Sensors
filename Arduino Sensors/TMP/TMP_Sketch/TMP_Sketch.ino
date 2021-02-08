const int LED_RED = 8;
const int LED_BLUE =6;
const int PIR = 12;
const int tmp = A1;

void setup()
{ 
  pinMode(LED_RED,OUTPUT);
  pinMode(LED_BLUE,OUTPUT);
  pinMode(PIR, INPUT);
  pinMode(tmp,INPUT);
  Serial.begin(9600);
}

void loop()
{ 
  float read = digitalRead(PIR);
  float input = analogRead(A1);
  float temp = input / 1024;
  temp = temp * 5;
  temp = temp - 0.5;
  temp = temp * 100;
 
  
    if (temp > 20 && read == 1) {
    digitalWrite(LED_RED, HIGH);
    delay(1000);
    digitalWrite(LED_RED, LOW);
    delay(1000);
  }
   
    else if (temp < 10 && read == 1){
    digitalWrite(LED_BLUE, HIGH);
    delay(1000);
    digitalWrite(LED_BLUE, LOW);
    delay(1000);
  }
  
    Serial.println(temp);
    Serial.println(read);
    delay(1000);
}
