int pin1=6;
int pin2=3;
int reader=A2;
int potval;
void setup() {
  // put your setup code here, to run once:
pinMode(reader,INPUT);
pinMode(pin1,OUTPUT);
pinMode(pin2,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potval=analogRead(reader);
  Serial.println(potval);
  if(potval<800)
  {
    Serial.println("\n\n\t\t\t DANGER!! \n\n\n\n");
    digitalWrite(pin1,HIGH);
    digitalWrite(pin2,HIGH);
   delay(10000);
  }
  digitalWrite(pin1,LOW);
  digitalWrite(pin2,LOW);

}
