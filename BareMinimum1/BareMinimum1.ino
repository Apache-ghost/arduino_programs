const int ledPin1 = 13;

const int blinkInterval = 1000;
const int blinkInterval1 = 2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(ledPin1, HIGH);
   delay(blinkInterval);
   digitalWrite(ledPin1, LOW);
   delay(blinkInterval);

   digitalWrite(ledPin1, HIGH);
   delay(blinkInterval);
   digitalWrite(ledPin1, LOW);
   delay(blinkInterval1);

    digitalWrite(ledPin1, HIGH);
   delay(blinkInterval);
   digitalWrite(ledPin1, LOW);
   delay(blinkInterval);

    digitalWrite(ledPin1, HIGH);
   delay(blinkInterval);
   digitalWrite(ledPin1, LOW);
   delay(blinkInterval1);
}
