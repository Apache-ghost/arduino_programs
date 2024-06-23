int pin=A1;
float V2=0;
float  readValue;
timeLap=1000;
void setup() {
  pinMode(read, INPUT);
  Serial.Begin(9600);

}

void loop() {
  readValue= analogWrite(pin)
  V2=5.0/255.0*readValue
Serial.prinln(V2)
  delay(timeLap)
  
  
}
