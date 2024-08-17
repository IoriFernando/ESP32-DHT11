#include "DHT.h"

#define DHTPIN 4
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);


void setup() {
  Serial.begin(9600);
  Serial.println(F("DHT11 Test!"));
  dht.begin();
}

void loop() {
  delay(2000);

  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if(isnan(h)|| isnan(t)){
    Serial.println(F("Falha na leitura do sensor DHT11"));
  }

  float indiceCalor = dht.computeHeatIndex(t,h,false);

  Serial.print(F("Umidade: "));
  Serial.print(h);
  Serial.print(F("%  Temperatura:  "));
  Serial.print(t);
  Serial.print("Cº");
  Serial.print("  Indice de calor:  ");
  Serial.print(indiceCalor);
  Serial.println("");

}
