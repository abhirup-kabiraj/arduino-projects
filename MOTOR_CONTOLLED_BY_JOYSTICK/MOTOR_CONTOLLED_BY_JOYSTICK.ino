int mpin=4;//motor pin
int dir1=5;
int dir2=6;
int ypin= A1;//inputs y coordinate of joystick
int jval,motorspeed;
void setup() {
  // put your setup code here, to run once:
  pinMode(mpin,OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(dir2,OUTPUT);
  pinMode(ypin,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  jval=analogRead(ypin);
  if(jval>512)
  {
    digitalWrite(dir1,HIGH);
    digitalWrite(dir2,LOW);
    motorspeed=255./512.*jval+255.;
    analogWrite(mpin,motorspeed);
  }
  if(jval<=512)
  {
    digitalWrite(dir2,HIGH);
    digitalWrite(dir1,LOW);
    motorspeed=255./512.*jval+255.;
    analogWrite(mpin,motorspeed);
  }

}
