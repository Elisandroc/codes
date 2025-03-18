#define SENSOR_TTP233 2  // Input pin for the capacitive sensor
#define LED 8            // Pin where the LED is connected

void setup() {
    pinMode(SENSOR_TTP233, INPUT); // Set the sensor as an input
    pinMode(LED, OUTPUT);          // Set the LED as an output
}

void loop() {
    int state = digitalRead(SENSOR_TTP233); // Read the sensor state

    if (state == HIGH) {  // If the sensor is touched
        digitalWrite(LED, HIGH); // Turn on the LED
    } else {
        digitalWrite(LED, LOW);  // Turn off the LED
    }
}
