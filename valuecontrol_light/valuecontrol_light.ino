int switch_high=11;
int switch_low=12;
int dt=250;
int ledpin=6;
int readval=0;
int buzzpin=3;
void setup() {
  // put your setup code here, to run once:
  pinMode(switch_high,INPUT);
  pinMode(switch_low,INPUT);
  pinMode(ledpin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(switch_high)==0)
  {
  readval+=50;  
  Serial.println(readval);
  
  analogWrite(ledpin,readval);
  }
  else if(digitalRead(switch_low)==0)
  {
    readval-=50;
  Serial.println(readval);
  analogWrite(ledpin,readval);
  }
  if(readval>255 )
  {
    readval=255;
    Serial.println("ERROR");
    Serial.println(readval);
    analogWrite(buzzpin,255);
    
    digitalWrite(ledpin,HIGH);
    delay(dt);
    digitalWrite(ledpin,LOW);
    delay(dt);
    digitalWrite(ledpin,HIGH);
    delay(dt);
    digitalWrite(ledpin,LOW);
    delay(dt);
    digitalWrite(ledpin,HIGH);
    delay(dt);
    digitalWrite(ledpin,LOW);
    delay(dt);
     digitalWrite(buzzpin,LOW);
  }

  if(readval<0 )
  {
    readval=0;
    Serial.println("ERROR");
    Serial.println(readval);
    analogWrite(buzzpin,255);
   
    digitalWrite(ledpin,HIGH);
    delay(dt);
    digitalWrite(ledpin,LOW);
    delay(dt);
    digitalWrite(ledpin,HIGH);
    delay(dt);
    digitalWrite(ledpin,LOW);
    delay(dt);
    digitalWrite(ledpin,HIGH);
    delay(dt);
    digitalWrite(ledpin,LOW);
    delay(dt);
     digitalWrite(buzzpin,LOW);
  }
  
  delay(dt);

}
