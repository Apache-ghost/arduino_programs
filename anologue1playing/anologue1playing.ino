int ledPin = 9;  // LED connected to digital pin 9
int timelap=1000
int brightness =255 ;    // Starting brightness level

void setup() {
  pinMode(ledPin, OUTPUT);  // Set the LED pin as an output
}

void loop() {
  analogWrite(ledPin, brightness);  // Set the LED brightness using PWM

  delay(timelap);  // Delay for smooth transition (adjust as needed)
}
// pin 9,10,11 are the pins that we canm used to varied the intensity ,
//we can't use pin 13 b/c it is directly connected to the arduino .
//analogWrite is commonly used whenever you need to control the intensity, speed, position, or duty cycle of an output signal in Arduino projects.
