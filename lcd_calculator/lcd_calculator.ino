#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
int c,a;
double res=0;
char operate;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup() {
  // put your setup code here, to run once:
 lcd.begin(16,2);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,0);
  lcd.print("ENTER 1'ST NO");
  Serial.println("ENTER 1'ST NO");
  while(Serial.available()==0)
  {
    
  }
  a=Serial.parseInt();
  lcd.setCursor(0,1);
  lcd.print(a);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("ENTER OPERATION");
  Serial.println("ENTER OPERATION");
  while(Serial.available()==0)
  {
    
  }
  operate=Serial.read();
  lcd.setCursor(0,1);
  lcd.print(operate);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("ENTER 2'ND NO");
  Serial.println("ENTER 2'ND NO");
  while(Serial.available()==0)
  {
    
  }
  c=Serial.parseInt();
   lcd.setCursor(0,1);
  lcd.print(c);
  lcd.clear();
  if(operate=='+')
  {
    res=a+c;
  }
  if(operate=='-')
  {
    res=a-c;
  }
  if(operate=='*')
  {
    res=a*c;
  }
  if(operate=='/')
  {
    res=a/c;
  }
  Serial.println("THE ANSWER IS");
  Serial.print(a);
  Serial.print(operate);
  Serial.print(c);
  Serial.print("=");
  Serial.print(res);
  lcd.setCursor(0,0);
  lcd.print("THE ANSWER IS");
  lcd.setCursor(0,1);
  lcd.print(a);
  lcd.setCursor(2,1);
  lcd.print(operate);
  lcd.setCursor(4,1);
  lcd.print(c);
  lcd.setCursor(5,1);
  lcd.print("=");
  lcd.setCursor(7,1);
  lcd.print(res);
  delay(10000);
  lcd.clear();
  
}
