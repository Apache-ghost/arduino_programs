const int ledPin1 = 13;
const int ledPin2 = 12;
const int blinkInterval = 10000;

void setup() {
  // Initialize LED pins as outputs
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  // Blink pattern 1
  for (int i = 0; i < 4; i++) {
    digitalWrite(ledPin1, HIGH);
    delay(blinkInterval);
    digitalWrite(ledPin1, LOW);
    delay(blinkInterval);
  }
  
  // Blink pattern 2
  for (int i = 0; i <3; i++) {
    digitalWrite(ledPin2, HIGH);
    delay(blinkInterval);
    digitalWrite(ledPin2, LOW);
    delay(blinkInterval);
  }
}
