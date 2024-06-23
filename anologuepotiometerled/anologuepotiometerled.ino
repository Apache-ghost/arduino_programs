int pin=A1;
float V2=0;
float  readValue;
int view=0
int view1=1023
timeLap=1000;
void setup() {
  pinMode(read, INPUT);
  Serial.Begin(9600);

}

void loop() {
  readValue= analogWrite(pin)
  V2=5.0/1023.0*readValue
Serial.println(V2)
  delay(timeLap)

If(V2>4)
    analogWrite(pin,view)
  
If(V2<4)
    analogWrite(pin,view1)
 
  
  
}
