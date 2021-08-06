int a=5;
int b=6;
int c=7;
int t1=100;
int t2=5000;
int t3=7500;


void setup() {
  // put your setup code here, to run once:
pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(a,HIGH);

delay(t1);
digitalWrite(a,LOW);
digitalWrite(b,HIGH);
delay(t2);
digitalWrite(b,LOW);
digitalWrite(c,HIGH);
delay(t1);
digitalWrite(c,LOW);
}
