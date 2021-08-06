#include <LiquidCrystal.h>
int con=6;
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
int c=0;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup() {
  // put your setup code here, to run once:
 lcd.begin(16,2);
 Serial.begin(9600);
 pinMode(con,OUTPUT);
 analogWrite(con,75);
}

void loop() {
  // put your main code here, to run repeatedly:

    lcd.setCursor(0,0);
    lcd.print("Hello World");
    lcd.setCursor(0,1);
    lcd.print("EURO CUP starts in->");
    delay(1000);
    c++;
  
/*lcd.clear();
lcd.setCursor(0,1);
lcd.print("EURO CUP starts in->");
lcd.setCursor(0,1);
for(int i=10;i>=0;i++)
{
lcd.print(i);
delay(100);
}
lcd.clear();
*/
Serial.println("hi");
}
