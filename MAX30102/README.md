# Arduino Heart Rate Reader with MAX30102 Sensor
Scripts to read heart rate data from a MAX30102 sensor using an Arduino.

## Requirements:

* Arduino board (e.g., Arduino Uno, Nano, etc.)
* MAX30102 heart rate and pulse oximetry sensor
* Arduino IDE
* MAX30105 Library by SparkFun
* (Optional) Adafruit GFX Library if you decide to add OLED support later on

## Connect the MAX30102 sensor to the Arduino:

* Follow the connection guidelines provided by the sensor's datasheet or any accompanying documentation. Typically, this would involve connecting the sensor's VCC to 3.3V or 5V, GND to a ground pin, and I2C pins (SDA, SCL) to the respective I2C pins on the Arduino.

## Install the Necessary Libraries:

You'll need to install the MAX30105 library (and optionally the Adafruit GFX library) to interface with the MAX30102 sensor and display data on an OLED.

* In the Arduino IDE 2, go to Sketch -> Include Library -> Manage Libraries.
* Search for "MAX30105" and install the library by SparkFun.
* (Optional) If you decide to add OLED support later on, search for "Adafruit GFX" and install the library.

## Uploading the code:

* Open the Arduino sketch in the Arduino IDE.
* Select the appropriate board and port from the Tools menu.
* Click the upload button to transfer the code to your Arduino.
* Open the Serial Monitor to view the heart rate readings.

## Output:
The code will display heart rate readings via the Serial Monitor. If a finger isn't detected on the sensor, it will notify the user.

## License:
This project is open-source and for educational purposes. Feel free to use, share, and modify the code as needed.

## Contact:
Please feel free to contact Starlight Robotics for any inquiries, questions, or further assistance.
