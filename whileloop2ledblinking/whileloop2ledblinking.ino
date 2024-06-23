int ledPin1 = 13;
int ledPin2 = 12;
int blinkInterval = 10;
int maxlimit1 = 4;
int maxlimit2 = 3;
int i = 0;
int j = 0;

void setup() {
  // Initialize LED pins as outputs
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  // Blink pattern 1
  while (i < maxlimit1) {
    digitalWrite(ledPin1, HIGH);
    delay(blinkInterval);
    digitalWrite(ledPin1, LOW);
    delay(blinkInterval);
    i++;
  }

  // Blink pattern 2
  while (j < maxlimit2) {
    digitalWrite(ledPin2, HIGH);
    delay(blinkInterval);
    digitalWrite(ledPin2, LOW);
    delay(blinkInterval);
    j++;
  }

  // Reset counters for the next iteration
  i = 0;
  j = 0;
}
