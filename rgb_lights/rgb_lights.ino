int redpin=6,greenpin=9,bluepin=11;
String msg="what colour do you want to display?";
String code;
void setup() {
  // put your setup code here, to run once:
  pinMode(redpin,OUTPUT);
  pinMode(greenpin,OUTPUT);
  pinMode(bluepin,OUTPUT);
  pinMode(3,OUTPUT);
  /*pinMode(cyanpin,OUTPUT);
  pinMode(yellowpin,OUTPUT);
  pinMode(fushapin,OUTPUT);
  pinMode(orangepin,OUTPUT);*/
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redpin,50);
  analogWrite(greenpin,50);
  analogWrite(bluepin,50);
  Serial.println(msg);
  while(Serial.available()==0)
  {
    
  }
  code=Serial.readString();
  Serial.println(code);
  if(code.equals("red"))
  {
    analogWrite(redpin,255);
    analogWrite(greenpin,0);
    analogWrite(bluepin,0);
    digitalWrite(3,HIGH);
    delay(3000);
    digitalWrite(3,LOW);
  }
   if(code.equals("blue"))
  {
    analogWrite(redpin,0);
    analogWrite(greenpin,0);
    analogWrite(bluepin,255);
    delay(3000);
  }
   if(code=="green")
  {
    analogWrite(redpin,0);
    analogWrite(greenpin,255);
    analogWrite(bluepin,0);
    delay(3000);
  }
   if(code=="cyan")
  {
    analogWrite(redpin,0);
    analogWrite(greenpin,35);
    analogWrite(bluepin,30);
    delay(3000);
  }
   if(code=="yellow")
  {
    analogWrite(redpin,250);
    analogWrite(greenpin,250);
    analogWrite(bluepin,0);
    delay(3000);
  }
}
