int sensorPin = A0;  // LDR connected to A0

void setup() {
  Serial.begin(9600);  // Start serial communication
}

void loop() {
  int sensorValue = analogRead(sensorPin); // Read light level
  Serial.println(sensorValue);             // Print value
  delay(500);                              // Wait for half a second
}
