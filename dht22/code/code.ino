/*Library*/
#include <DHT.h>;

/*Constans*/
#define DHTPIN 2 
#define DHTTYPE DHT22
DHT dht (DHTPIN, DHTTYPE);

/*Variables*/
int chk;
float hum;
float temp; 

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  //Read data and store it to variables hum and temp.
  hum = dht.readHumidity();
  temp = dht.readTemperature();
  //Print data in the Serial Monitor.
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.print(" C, Humidity: ");
  Serial.println(hum);
  delay(1000); 
}
