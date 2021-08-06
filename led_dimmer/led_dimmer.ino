int readpin=A2;
int checkpin=5;
int val;
float v2;
void setup() {
  // put your setup code here, to run once:
 pinMode(readpin,INPUT);
 pinMode(checkpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val=analogRead(readpin);
  v2=(255./1023.)*val;
  analogWrite(checkpin,v2);
}
