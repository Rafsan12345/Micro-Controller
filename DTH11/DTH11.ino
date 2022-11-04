#include "DHT.h"

#define DHTPIN 2     
#define DHTTYPE DHT11   


DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println(F("DHTxx test!"));

  dht.begin();
}

void loop() {
  

  
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  Serial.println(t);
}
