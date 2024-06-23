 int motorPin1 = 3;   
 int motorPin2 = 5;  
 int enablePin = 4;  

void setup() {
  
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(enablePin, OUTPUT);
}

void loop() {
  
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(enablePin, HIGH);
  delay(2000);

  
  digitalWrite(enablePin, LOW);
  delay(1000);

  
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(enablePin, HIGH);
  delay(2000);


  digitalWrite(enablePin, LOW);
  delay(1000);
}
