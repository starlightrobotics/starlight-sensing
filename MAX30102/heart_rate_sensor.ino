// Starlight Robotics
// Sensing Series
// Dive deep into the essence of life by sensing the heartbeat!
// This sketch connects with the MAX30102 sensor to PINS A4 and A5.
// Be one with your body by tracking your heart rate in real-time.

#include "MAX30105.h"      // Include the MAX30105 sensor library
#include "heartRate.h"     // Include the heart rate calculating algorithm

MAX30105 particleSensor;   // Initialize the MAX30105 sensor

const byte RATE_SIZE = 4;  // Define the size of the array to store heart rates
byte rates[RATE_SIZE];     // Array to store recent heart rates for averaging
byte rateSpot = 0;
long lastBeat = 0;         // Time the last heartbeat was sensed
float beatsPerMinute;      // Store the calculated beats per minute
int beatAvg;               // Store the average beats per minute

void setup() {
  Serial.begin(9600);                        // Start the serial communication
  particleSensor.begin(Wire, I2C_SPEED_FAST); // Start the MAX30105 sensor with fast I2C speed
  particleSensor.setup();                     // Set up the sensor with default settings
  particleSensor.setPulseAmplitudeRed(0x0A);  // Adjust the red LED pulse amplitude
}

void loop() {
  long irValue = particleSensor.getIR();      // Gently request the sensor for the IR value which indicates a heartbeat

  if (irValue > 7000) {                        // Check if a heartbeat is detected
    if (checkForBeat(irValue)) {              // If a heartbeat is indeed sensed
      long delta = millis() - lastBeat;       // Measure the time between two beats
      lastBeat = millis();                    // Update the last heartbeat time

      beatsPerMinute = 60 / (delta / 1000.0); // Calculate the beats per minute

      // To get a smooth beat reading, we store some values and calculate the average
      if (beatsPerMinute < 255 && beatsPerMinute > 20) {
        rates[rateSpot++] = (byte)beatsPerMinute; // Store this reading in the array
        rateSpot %= RATE_SIZE;                   // Keep the index in bounds

        // Calculate the average of readings
        beatAvg = 0;
        for (byte x = 0; x < RATE_SIZE; x++) {
          beatAvg += rates[x];
        }
        beatAvg /= RATE_SIZE;
      }

      // Share the rhythm of your heart with the world
      Serial.print("Heart Rate: ");
      Serial.println(beatAvg);
    }
  } else {
    beatAvg = 0;   // Reset the average if no heartbeat is detected
  }
}
