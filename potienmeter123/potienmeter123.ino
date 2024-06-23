int ledPin=A1;
int ledPin1=9;
int ledPin2=2;
int readValue=0;
int V2;
int paah = 100;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, INPUT);
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  readValue=analogRead(ledPin);
  
  V2=255.0/1024.0* readValue;
  Serial.println(V2);
  analogWrite(ledPin1,V2);
  analogWrite(ledPin2,V2);
  
  delay(paah);
  

}
