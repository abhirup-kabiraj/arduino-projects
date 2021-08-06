int tiltpin=2;
int redpin=6;
int greenpin=7;
int tiltval;
void setup() {
  // put your setup code here, to run once:
  pinMode(tiltpin,INPUT);
  digitalWrite(tiltpin,HIGH);
  pinMode(redpin,OUTPUT);
  pinMode(greenpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tiltval=digitalRead(tiltpin);
  if(tiltval==0)
  {
    digitalWrite(redpin,LOW);
    digitalWrite(greenpin,HIGH);
  }
  if(tiltval==0)
  {
    digitalWrite(greenpin,LOW);
    digitalWrite(redpin,HIGH);
  }
  

}
