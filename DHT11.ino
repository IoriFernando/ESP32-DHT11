#include "DHT.h" // Importação das biblilotecas

#define DHTPIN 5 // Definindo o pino da placa
#define DHTTYPE DHT11 // Definito o tipo de sensor

DHT dht(DHTPIN, DHTTYPE); // Cria um objeto do Tipo DHT 
// O objeto rebedo o pino e o tipo do sensor

void setup() {
  Serial.begin(9600); // Taxa de transmissão
  Serial.println(F("DHT11 Test!"));
  dht.begin(); // inicialização do sensor 
}

void loop() {
  delay(2000); // Taxa de leitura de 2s 

  float h = dht.readHumidity(); // Variável para umidade
  float t = dht.readTemperature(); // Variável para a temperatura

  if(isnan(h)|| isnan(t)){ // Teste se a leitura ocorre normalmente
    Serial.println(F("Falha na leitura do sensor DHT11"));
  }

  float indiceCalor = dht.computeHeatIndex(t,h,false); // Variável para o indice de calor.

  // Visualização dos dados coletados
  Serial.print(F("Umidade: "));
  Serial.print(h);
  Serial.print(F("%  Temperatura:  "));
  Serial.print(t);
  Serial.print("Cº");
  Serial.print("  Indice de calor:  ");
  Serial.print(indiceCalor);
  Serial.println("");

}
