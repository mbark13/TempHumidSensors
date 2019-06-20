#include <DHT.h>

// What pin are we using on the uno board
#define DHTPIN 7

// Module type is DHT11
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // set your serial connection bit rate. Standard = 9600
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);
  
  Serial.print(F("Temperature = "));
  Serial.println(t);

  Serial.print(F("Temp in Fahrenheit = "));
  Serial.println(f);
  
  Serial.print(F("Humidity = "));
  Serial.println(h);
  Serial.println();
  Serial.println();
  delay(3000);
}
