int trig=7;
int echo=6;
int travelTime;
void setup() {
  // put your setup code here, to run once:
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig,LOW);
delayMicroseconds(10);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);
travelTime=pulseIn(echo,HIGH);
delay(40);
//Serial.print("Distance of object=");
Serial.println(travelTime*330./20000.);
//Serial.println(" cm");

}
