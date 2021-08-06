
int redpin=6;
int greenpin=9;
int bluepin=11;
int i,j,k;
void setup() {
  // put your setup code here, to run once:
  pinMode(redpin,OUTPUT);
  pinMode(bluepin,OUTPUT);
  pinMode(greenpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

       analogWrite(redpin,255);
       analogWrite(greenpin,0);
       analogWrite(bluepin,0); 
       delay(100);
       analogWrite(redpin,0);
      analogWrite(greenpin,255);
      analogWrite(bluepin,0);
        delay(100);
        analogWrite(redpin,0);
    analogWrite(greenpin,0);
    analogWrite(bluepin,255);
    delay(100);
    analogWrite(redpin,0);
    analogWrite(greenpin,255);
    analogWrite(bluepin,255);
    delay(100);
    analogWrite(redpin,255);
    analogWrite(greenpin,0);
    analogWrite(bluepin,255);
    delay(100);
    analogWrite(redpin,255);
    analogWrite(greenpin,255);
    analogWrite(bluepin,0);
    delay(100);
    analogWrite(redpin,40);
    analogWrite(greenpin,255);
    analogWrite(bluepin,40);
    delay(100);
    analogWrite(redpin,90);
    analogWrite(greenpin,25);
    analogWrite(bluepin,55);


 
delay(100);
  
}
