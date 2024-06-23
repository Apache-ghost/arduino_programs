int ledPin1 = 13;
int ledPin2 = 12;
int blinkInterval = 1000;
int blinkInterval1 = 1000;

void setup() {
  // Initialize LED pins as outputs
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  // Blink pattern 1
  for (int i = 0; i < 8; i++) {
    if (i <= 4) {
      digitalWrite(ledPin1, HIGH);
      delay(blinkInterval);
      digitalWrite(ledPin1, LOW);
      delay(blinkInterval);
    }
    else {
      // Blink pattern 2
      digitalWrite(ledPin2, HIGH);
      delay(blinkInterval1);
      digitalWrite(ledPin2, LOW);
      delay(blinkInterval1);
    }
  }
}
