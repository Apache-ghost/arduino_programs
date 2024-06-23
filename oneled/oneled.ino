int ledPin = 13;
int ledPin1= 12;
int pin3 = 11;
int blinkInterval = 100;

void setup(){ 
  pinMode(ledPin, OUTPUT); // Initialize LED pin as output
  pinMode(ledPin1,OUTPUT);
  pinMode(pn3,OUTPUT);
}

void loop() {
  analogWrite(ledPin// Turn on the LED
    delay(blinkInterval);
    digitalWrite(ledPin, LOW); // Turn off the LED
      delay(blinkInterval);
        digitalWrite(ledPin1,HIGH); // Turn on the LED
    digitalWrite(ledPin1,HIGH); // Turn on the LED
      delay(blinkInterval);
        digitalWrite(ledPin1,LOW); 
      delay(blinkInterval);

} 
