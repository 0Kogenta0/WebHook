int led = D6;  // The on-board LED
int lightSensorPin = A0;  // PIN Light Sensor is connected to
int analogvalue;  // Store the data for light sensor

void setup() {
    Serial.begin();
    pinMode(led, OUTPUT);
    digitalWrite(led, HIGH);
}

void loop() {
    
    analogvalue = analogRead(lightSensorPin); // Read light sensor data

    String data = String(analogvalue); //Convert data to string type
    Particle.publish("light", data, PRIVATE);
    delay(3000);               // Wait for 30 seconds
}