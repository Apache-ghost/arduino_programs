
int led = 9;

int dim = 255;
int dim1 = 200;
int dim2 = 150;
int dim3 = 100;
int dim4 = 50;
int dim5 = 10;
int pah = 1000;


void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  analogWrite(led, dim);
  delay(pah);
  analogWrite(led, dim1);
  delay(pah);
  analogWrite(led, dim2);
  delay(pah);
  analogWrite(led, dim3);
  delay(pah);
  analogWrite(led, dim4);
  delay(pah);
  analogWrite(led, dim5);
  delay(pah);


}
