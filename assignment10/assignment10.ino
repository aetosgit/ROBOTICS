int irSensor = 7;   // IR sensor output pin
int ledPin = 13;     // LED pin

void setup() {
  pinMode(irSensor, INPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
  Serial.println("IR Sensor Test Started");
}

void loop() {
  int value = digitalRead(irSensor);

  Serial.print("Sensor Value: ");
  Serial.println(value);

  if (value == LOW) {   // Object detected
    digitalWrite(ledPin, HIGH);
  } else {              // No object detected
    digitalWrite(ledPin, LOW);
  }

  delay(500);
}