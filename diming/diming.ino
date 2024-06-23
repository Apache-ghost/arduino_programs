int ledPin1 = 10;
int ledPin2 = 11;
int interval = 10; // Adjust this value to control the speed of dimming
int brightness = 80;
int fadeAmount = 110;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  // Set the brightness of ledPin1
  analogWrite(ledPin1, brightness);
  // Set the brightness of ledPin2
  analogWrite(ledPin2, brightness);

  // Change the brightness for next time through the loop
  brightness = brightness + fadeAmount;

  // Reverse the direction of the fading at the ends of the fade
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }

  // Wait for a short period of time to see the dimming effect
  delay(interval);
}
