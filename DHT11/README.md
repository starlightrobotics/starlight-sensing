# Raspberry Pi DHT11 Reader
A Python script to read temperature and humidity data from a DHT11 sensor using a Raspberry Pi.

## Requirements
#### Raspberry Pi with GPIO pins
DHT11 temperature and humidity sensor
Python 3
Adafruit DHT library
Setup
Hardware Connection
Connect the DHT11 sensor to the Raspberry Pi as follows:

* VCC to 3.3V pin
* GND to a ground pin
* Data pin to a GPIO pin (e.g., GPIO4)

#### Install the Adafruit DHT Library
You'll need to install the Adafruit DHT library to interface with the DHT11 sensor. Run the following command:

```
sudo pip3 install Adafruit_DHT
```
#### Clone the Repository
If you have the code in a repository, you can clone it, or simply copy the Python script provided in this repository.

#### Usage
Make the script executable by running:

```
chmod +x your_script.py
```
Run the script using:

```
./your_script.py
```
The script will continuously print the temperature and humidity readings to the console every 3 seconds.

**License**
This project is open-source and for educational purposes. Feel free to use and modify the code as needed.

**Contact**
Please feel free to contact Starlight Robotics if you have any questions or need further assistance.
