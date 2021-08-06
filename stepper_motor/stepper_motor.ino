#include<Stepper.h>
int steprotspeed=10;
int stepnums=2048;
Stepper mystepper(stepnums,8,9,10,11);
int buzzpin=6;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
mystepper.setSpeed(steprotspeed);
pinMode(buzzpin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(buzzpin)==HIGH)
  {
       mystepper.step(stepnums);
  }
   if(digitalRead(buzzpin)==LOW)
  {
       mystepper.step(-stepnums);
  }

}
