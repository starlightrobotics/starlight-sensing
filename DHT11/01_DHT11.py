#!/usr/bin/env python3
# Starlight Robotics
# Sensing Series
# Connect the DHT11 Sensor to the Raspberry Pi: The DHT11 sensor typically has three or four pins, depending on the model. Connect the VCC to a 3.3V pin, GND to a ground pin, and the data pin to a GPIO pin on the Raspberry Pi (e.g., GPIO4).
# The script reads from the PIN 4
#
# To install the library run:
# pip3 install Adafruit_DHT
# To run, type:
# python3 01_DHT11.py
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
