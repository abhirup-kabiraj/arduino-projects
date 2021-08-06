#include <Servo.h>
double angle;
int servopin=A4;
int lightval;
int lightpin=A3;
int dt=100;
Servo myservo;
void setup() {
  // put your setup code here, to run once:
  pinMode(lightpin, INPUT);
  Serial.begin(9600);
  myservo.attach(servopin);
}

void loop() {
  // put your main code here, to run repeatedly:
lightval=analogRead(lightpin);
Serial.println(lightval);
delay(dt);
angle=(-16./63.)*lightval+16.*780./63.;
myservo.write(angle);
}
