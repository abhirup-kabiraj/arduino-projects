double sinval;
double cosval;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for(float i=0;i<2*3.14;i=i+0.1)
{
sinval=sin(i);
cosval=cos(i);
Serial.print(sinval);
Serial.print(",");
Serial.println(cosval);
}
delay(250);
//Serial.println();

}
