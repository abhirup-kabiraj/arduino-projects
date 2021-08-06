#include "DHT.h"
#define TYPE DHT11
int tempC;
int sensepin=2;
int tempF;
int humid;
DHT HT(sensepin,TYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  HT.begin();
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
  tempC=HT.readTemperature();
  tempF=HT.readTemperature(true);
  humid=HT.readHumidity();
  Serial.print("TEMPERATURE=");
  Serial.print(tempC);
  Serial.print(" C ");
  Serial.print(" or ");
  Serial.print(tempF);
  Serial.println(" F ");
  Serial.print("Humidity= ");
  Serial.println(humid);
  Serial.print("\n\n");
  delay(1000);
}
