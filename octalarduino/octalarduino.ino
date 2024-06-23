int ledpin1 = 13;
int ledpin2 = 12;
int ledpin3 = 11;
int blinkInterval = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin1, OUTPUT);
  pinMode(ledpin2, OUTPUT);
  pinMode(ledpin3, OUTPUT);
}

void loop() {
  // Octal combination 001
  digitalWrite(ledpin1, HIGH);
  digitalWrite(ledpin2, LOW);
  digitalWrite(ledpin3, LOW);
  delay(blinkInterval);

  // Octal combination 002
  digitalWrite(ledpin1, LOW);
  digitalWrite(ledpin2, LOW);
  digitalWrite(ledpin3, LOW);
  delay(blinkInterval);

  // Octal combination 010
  digitalWrite(ledpin1, LOW);
  digitalWrite(ledpin2, HIGH);
  digitalWrite(ledpin3, LOW);
  delay(blinkInterval);

  // Octal combination 011
  digitalWrite(ledpin1, LOW);
  digitalWrite(ledpin2, HIGH);
  digitalWrite(ledpin3, HIGH);
  delay(blinkInterval);

  // Octal combination 100
  digitalWrite(ledpin1, HIGH);
  digitalWrite(ledpin2, LOW);
  digitalWrite(ledpin3, LOW);
  delay(blinkInterval);

  // Octal combination 101
  digitalWrite(ledpin1, HIGH);
  digitalWrite(ledpin2, LOW);
  digitalWrite(ledpin3, HIGH);
  delay(blinkInterval);

  // Octal combination 110
  digitalWrite(ledpin1, HIGH);
  digitalWrite(ledpin2, HIGH);
  digitalWrite(ledpin3, LOW);
  delay(blinkInterval);

  // Octal combination 111
  digitalWrite(ledpin1, HIGH);
  digitalWrite(ledpin2, HIGH);
  digitalWrite(ledpin3, HIGH);
  delay(blinkInterval);
}
