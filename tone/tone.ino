int buzzpin=13;
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
tone(buzzpin,1915);
  delay(1000); // Wait for 1000 millisecond(s)
  tone(buzzpin,1700);
  delay(1000); // Wait for 1000 millisecond(s)
  tone(buzzpin,1519);
  delay(1000);
  tone(buzzpin,1432);
  delay(1000);
  tone(buzzpin,1275);
  delay(1000);
  tone(buzzpin,1136);
  delay(1000);
  tone(buzzpin,1014);
  delay(1000);
  tone(buzzpin,0);
  delay(1000);
}
