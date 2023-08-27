# Raspberry Pi and Arduino PIR Motion Sensor Reader
Scripts to read motion data from a PIR (Passive Infrared) sensor using both a Raspberry Pi and Arduino.

## Raspberry Pi Setup
Hardware Requirements
* Raspberry Pi with GPIO pins
* PIR motion sensor
* Python 3

#### Wiring the PIR Sensor to Raspberry Pi
Connect the PIR sensor to the Raspberry Pi as follows:
VCC to 5V or 3.3V pin
GND to a ground pin
OUT (signal pin) to a GPIO pin (e.g., GPIO17)

#### Software Setup
Install the necessary Python libraries by running the following command:

```
sudo pip3 install RPi.GPIO
```

Clone the repository to get the Python script or simply copy the Python script provided in this repository.

#### Usage
Make the script executable:

```
chmod +x your_script.py
```

Run the script:
```
./your_script.py
```
The script will continuously print "Motion Detected" or "No Motion" to the console based on the sensor's readings.

## Arduino Setup
Hardware Requirements
* Arduino board (e.g., Arduino Uno)
* PIR motion sensor
* Arduino IDE

#### Wiring the PIR Sensor to Arduino
Connect the PIR sensor to the Arduino as follows:
* VCC to 5V pin
* GND to a ground pin
* OUT (signal pin) to a digital pin (e.g., D2)

#### Software Setup
Open the Arduino sketch provided in this repository using the Arduino IDE.

#### Uploading the Code
* Open the Arduino IDE (available on the official Arduino website)
* Select the appropriate board and port in the top menu
* Click the upload button to send the code to your Arduino
* Open the Serial Monitor to view the motion detection readings

## License
This project is open-source and for educational purposes. Feel free to use and modify the code as needed.

## Contact
Please feel free to contact Starlight Robotics if you have any questions or need further assistance.
