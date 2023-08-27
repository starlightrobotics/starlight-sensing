// Starlight Robotics
// Sensing Series
// Welcome to the engaging world of Arduino and motion sensing!
// This sketch allows you to connect with a PIR motion sensor.
// Connect the VCC to 5V, GND to ground, and OUT (signal pin) to pin 2 on the Arduino.
// Detect motion in your surroundings.

#define PIR_PIN 2  // Define the pin where the OUT (signal pin) of the PIR sensor is connected

int motionState = 0; // Variable to hold the state of the motion sensor (LOW = No Motion, HIGH = Motion Detected)

void setup() {
  pinMode(PIR_PIN, INPUT);     // Initialize the PIR_PIN as an input
  Serial.begin(9600);          // Start the serial communication
}

void loop() {
  // Read the PIR sensor's output
  motionState = digitalRead(PIR_PIN);

  // Determine if motion was detected or not
  if (motionState == HIGH) {
    Serial.println("Motion Detected!");
  } else {
    Serial.println("No Motion");
  }

  // Pause for a moment to gather the next set of data (2 seconds)
  delay(2000);
}
