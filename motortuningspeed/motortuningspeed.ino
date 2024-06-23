int motorPin1 = 13;  
int duration=1000;

void setup() {
 
  pinMode(motorPin1, OUTPUT);

}

void loop() {
  digitalWrite(motorPin1, HIGH);
   delay(duration);
  digitalWrite(motorPin1, LOW)
  delay(duration);

}
