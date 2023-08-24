// Starlight Robotics
// Sensing Series
// Welcome to the exciting world of Arduino and temperature and humidity sensing!
// This sketch allows you to connect with the DHT11 sensor.
// Connect the VCC to 3.3V or 5V, GND to ground, and data pin to pin 2 on the Arduino.
// Feel the rhythm of nature by reading the temperature and humidity around you.

#include "DHT.h" // Include the DHT library

#define DHTPIN 2     // Define the pin where the data pin of the DHT sensor is connected, here we have PIN 2 defined
#define DHTTYPE DHT11 // Define the type of DHT sensor

DHT dht(DHTPIN, DHTTYPE); // Initialize the DHT sensor

void setup() {
  Serial.begin(9600); // Start the serial communication
  dht.begin();        // Initialize the DHT sensor
}

void loop() {
  // Pause for a moment to appreciate nature's beauty (2 seconds)
  delay(2000);

  // Gently ask the sensor for the current humidity and temperature
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  // Check if readings are valid and share them with the world
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("The sensor is shy right now. Let's try again soon.");
  } else {
    Serial.print("Temp: ");
    Serial.print(temperature);
    Serial.print("C  Humidity: ");
    Serial.print(humidity);
    Serial.println("%");
  }
}
