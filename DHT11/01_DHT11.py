#!/usr/bin/env python3
# Starlight Robotics
# Sensing Series
# Welcome to the wonderful world of temperature and humidity sensing!
# This script allows you to connect with the DHT11 sensor using your Raspberry Pi.
# Simply connect the VCC to a 3.3V pin, GND to a ground pin, and the data pin to GPIO4 on the Raspberry Pi.
# Feel the rhythm of nature by reading the temperature and humidity around you.
#
# To install the library run:
# pip3 install Adafruit_DHT
# To run, type:
# python3 01_DHT11.py
import Adafruit_DHT
import time

# Define the sensor type and the GPIO pin for our exciting adventure
DHT_SENSOR = Adafruit_DHT.DHT11
DHT_PIN = 4 # Feel free to change this to the GPIO pin you're using

# Function to read from the DHT11 sensor
def read_dht11():
    # Gently ask the sensor for the current humidity and temperature
    humidity, temperature = Adafruit_DHT.read_retry(DHT_SENSOR, DHT_PIN)
    
    # Share the temperature and humidity with the world!
    if humidity is not None and temperature is not None:
        print("Temp={0:0.1f}C  Humidity={1:0.1f}%".format(temperature, humidity))
    else:
        print("The sensor is shy right now. Let's try again soon.")

# Main loop to continuously engage with the sensor
while True:
    read_dht11()
    time.sleep(3) # Let's take a brief 3-second pause to appreciate nature's beauty
