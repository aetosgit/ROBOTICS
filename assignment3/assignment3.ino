int ldrPin = A0;
int ledPin = 5;
int ldrValue = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  ldrValue = analogRead(ldrPin);

  Serial.print("Light Value: ");
  Serial.println(ldrValue);

  if (ldrValue < 500) {      // Dark
    digitalWrite(ledPin, HIGH); // Turn ON LED
  } else {                   // Bright
    digitalWrite(ledPin, LOW);  // Turn OFF LED
  }

  delay(1000);
}