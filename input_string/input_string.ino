String mycolour;
int mypin2=12;
int mypin1=11;
int mypin3=13;
void setup() {
  // put your setup code here, to run once:
  pinMode(mypin1, OUTPUT);
  pinMode(mypin2, OUTPUT);
  pinMode(mypin3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("enter colour");
  while(Serial.available()==0)
  {
    
  }
  mycolour=Serial.readString();//Seral.parseInt() INPUTS INTEGERS
  if(mycolour=="red")
  {
    digitalWrite(mypin1,HIGH);
    digitalWrite(mypin2,LOW);
    digitalWrite(mypin3,LOW);
  }
  else   if(mycolour=="yellow")
  {
    digitalWrite(mypin2,HIGH);
    digitalWrite(mypin1,LOW);
    digitalWrite(mypin3,LOW);
  }
   else if(mycolour=="red")
  {
    digitalWrite(mypin3,HIGH);
    digitalWrite(mypin2,LOW);
    digitalWrite(mypin1,LOW);
  }
  
}
