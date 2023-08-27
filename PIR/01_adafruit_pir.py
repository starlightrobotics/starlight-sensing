#!/usr/bin/env python3
# Starlight Robotics
# Sensing Series
# Step into the intriguing realm of motion detection!
# This script connects you to the Adafruit PIR sensor via your Raspberry Pi.
# Attach the VCC to a 5V pin, GND to a ground pin, and the OUT pin to GPIO17 on the Raspberry Pi.
# Discover the hidden movements of the world around you!
#
# To run, type:
# python3 02_PIR.py
import RPi.GPIO as GPIO
import time

# Set up GPIO and the pin where we've connected the PIR sensor
GPIO.setmode(GPIO.BCM)
PIR_PIN = 17  # Change this to the GPIO pin you're using
GPIO.setup(PIR_PIN, GPIO.IN)

# Function to read from the PIR sensor
def read_pir():
    # Calmly inquire if there's any motion detected
    motion_detected = GPIO.input(PIR_PIN)

    # Share the motion state with the world!
    if motion_detected:
        print("Motion detected!")
    else:
        print("All is calm.")

# Main loop to continuously monitor for motion
while True:
    read_pir()
    time.sleep(1)  # A brief 1-second pause to scan the surroundings
