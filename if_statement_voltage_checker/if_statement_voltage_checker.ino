int readpin=A2,pin1=5,pin2=6,pin3=7 ;
int val;
float v2;
void setup() {
  // put your setup code here, to run once:
pinMode(readpin,INPUT);
pinMode(pin1,OUTPUT);
pinMode(pin2,OUTPUT);
pinMode(pin3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    val=analogRead(readpin);
    v2=(5./1023.)*val;
    if(v2<3)
    {
      digitalWrite(pin2,LOW);
      digitalWrite(pin3,LOW);
      digitalWrite(pin1,HIGH);
    }
   else if(v2>=3 && v2<4)
    {
      digitalWrite(pin3,LOW);
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,HIGH);
    }
    else
    {
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,LOW);
      digitalWrite(pin3,HIGH);
    }
}
