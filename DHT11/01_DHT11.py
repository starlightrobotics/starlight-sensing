#!/usr/bin/env python3
import Adafruit_DHT
import time

# Define the sensor type and the GPIO pin to which it's connected
DHT_SENSOR = Adafruit_DHT.DHT11
DHT_PIN = 4 # Change this to the GPIO pin you're using

# Function to read from the DHT11 sensor
def read_dht11():
    # Read the humidity and temperature from the sensor
    humidity, temperature = Adafruit_DHT.read_retry(DHT_SENSOR, DHT_PIN)
    
    # Check if readings are valid and print them
    if humidity is not None and temperature is not None:
        print("Temp={0:0.1f}C  Humidity={1:0.1f}%".format(temperature, humidity))
    else:
        print("Failed to retrieve data from the sensor")

# Main loop to continuously read data from the sensor
while True:
    read_dht11()
    time.sleep(3) # Pause for 3 seconds between readings
