
int r=2;
float v2;
float pi=3.14;
void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  v2=pi*r*r;
  Serial.print("area of circle is ");
  Serial.print(v2);
  r=r+1;
  delay(1000);
}
