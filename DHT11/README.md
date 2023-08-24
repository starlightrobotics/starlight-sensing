# Raspberry Pi and Arduino DHT11 Reader
Scripts to read temperature and humidity data from a DHT11 sensor using both a Raspberry Pi and Arduino.

## Raspberry Pi with GPIO pins
* Raspberry Pi with GPIO pins
* DHT11 temperature and humidity sensor
* Python 3

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

## Arduino
* Arduino board (e.g., Arduino Uno)
* DHT11 temperature and humidity sensor
* Arduino IDE
* DHT sensor library by Adafruit


#### Uploading the code
* Open the Arduino sketch in the Arduino IDE (available on the official Arduino website).
* Select the appropriate board and port in the top menu.
* Click the upload button to send the code to your Arduino.
* Open the Serial Monitor to view the temperature and humidity readings.

**License**
This project is open-source and for educational purposes. Feel free to use and modify the code as needed.

**Contact**
Please feel free to contact Starlight Robotics if you have any questions or need further assistance.
