int readpin= A3;  
float v2=0;
int val;
int time1=1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(readpin,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  val=analogRead(readpin);//reads value of connection in A3 and assigns a value to vale in between(0-255);
  v2=(5./1023.)*val;//gets digital value of val
  Serial.println(v2);//prints v2
  delay(time1);
}
