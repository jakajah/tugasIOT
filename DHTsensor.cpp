#include "DHT.h"

#define DHTPIN 21     
#define DHTTYPE DHT22   

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  Serial.println(F("DHT22 contoh"));
  dht.begin();
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  Serial.print(F("Kelembaban: "));
  Serial.print(humidity);
  Serial.print(F("% Suhu: "));
  Serial.print(temperature);
  Serial.println(F("°C "));

  delay(2000);
}