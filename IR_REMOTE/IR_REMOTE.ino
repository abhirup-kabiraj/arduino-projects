#include <IRremote.h>
int IRpin=9;
String comm;
decode_results cmd;
IRrecv IR(IRpin);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
IR.enableIRIn();
pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //IrReceiver.decodedIRData.<fieldname>
while(IR.decode(&cmd)==0)
{
}

//Serial.println(cmd.value,HEX);
delay(500);
IR.resume();
if(cmd.value==0x1FE48B7)
{
  comm="off";
}
else if(cmd.value==0x1FE58A7){
  comm="mode";
}
else if(cmd.value==0x1FE7887){
  comm="mute";
}
else if(cmd.value==0x1FE807F){
  comm="next";
}
else if(cmd.value==0x1FE40BF){
  comm="rewind";
}
else if(cmd.value==0x1FEC03F){
  comm="fast forward";
}
else if(cmd.value==0x1FE20DF){
  comm="eq";
}
else if(cmd.value==0x1FEA05F){
  comm="vol down";
}
else if(cmd.value==0x1FE609F){
  comm="vol up";
}
else if(cmd.value==0x1FE609F){
  comm="vol up";
}
else if(cmd.value==0x1FEE01F){

  comm="zero";
}
else if(cmd.value==0x1FE50AF){
  comm="one";
}
else if(cmd.value==0x1FED827){
  comm="two";
}
else if(cmd.value==0x1FEF807){
  comm="three";
}
else if(cmd.value==0x1FE30CF){
  comm="four";
}
else if(cmd.value==0x1FEB04F){
  comm="five";
}
else if(cmd.value==0x1FE708F){
  comm="six";
}
else if(cmd.value==0x1FE00FF){
  comm="seven";
}
else if(cmd.value==0x1FEF00F){
  comm="eight";
}
else if(cmd.value==0x1FE9867){
  comm="nine";
}


Serial.println(comm);
if(comm.equals("one"))
{
  Serial.println("BULB IS GLOWING");
  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(12,LOW);
}
}
