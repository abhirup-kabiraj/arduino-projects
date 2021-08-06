int xpin=A0;
int ypin=A1;
int spin=9;
int xval,yval,sval;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(xpin,INPUT);
pinMode(ypin,INPUT);
pinMode(spin,INPUT);
digitalWrite(spin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
xval=analogRead(xpin);
yval=analogRead(ypin);
sval=analogRead(spin);
Serial.println("value of x=");
Serial.println(xval);
Serial.println("  value of y=");
Serial.println(yval);
Serial.println(" string val=");
Serial.println(spin);
}
