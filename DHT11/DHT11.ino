#include <DHT.h>
#define Type DHT11
int sensePin=4;
DHT HT(sensePin,Type);
float humidity;
float tempC;
float tempF;
int setTime=2000;

void setup() {
Serial.begin(9600);
HT.begin();
delay(setTime);  
}

void loop() {
humidity=HT.readHumidity();
tempC=HT.readTemperature();
tempF=HT.readTemperature(true);

Serial.print("Humidity: ");
Serial.print(humidity);
Serial.print(" Temperature C ");
Serial.print(tempC);
Serial.print(" C ");
Serial.print(tempF);
Serial.println(" F ");
delay(2000);
}
