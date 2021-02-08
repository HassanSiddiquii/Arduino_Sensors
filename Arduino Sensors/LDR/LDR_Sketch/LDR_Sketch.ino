const int LED_RED = 12;
const int LED_BLUE =8;
const int PIR = 7;
const int ldr = A1;

void setup()
{ 
  pinMode(LED_RED,OUTPUT);
  pinMode(LED_BLUE,OUTPUT);
  pinMode(PIR, INPUT);
  pinMode(ldr,INPUT);
  Serial.begin(9600);
}

void loop()
{ float ldr = analogRead(A1);
  float read = digitalRead(PIR);

  
    if (ldr == 1 && read == 1) {
    digitalWrite(LED_RED, HIGH);
    delay(1000);
    digitalWrite(LED_RED, LOW);
    delay(1000);
  }
   
    else if (ldr == 0 && read == 1){
    digitalWrite(LED_BLUE, HIGH);
    delay(1000);
    digitalWrite(LED_BLUE, LOW);
    delay(1000);
  }
  
    Serial.println(ldr);
    Serial.println(read);
    delay(1000);
  }
