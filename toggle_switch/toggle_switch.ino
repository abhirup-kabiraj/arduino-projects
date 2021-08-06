int pin1=6;
int readval=A3;
int v1;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin1,OUTPUT);
  pinMode(readval,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  v1=digitalRead(readval);
  Serial.println(v1);
  if(v1==0)
  {
    do{
    digitalWrite(pin1,HIGH);
    v1=digitalRead(readval);
    }while(v1!=0);
  }
  digitalWrite(pin1,LOW);

}
