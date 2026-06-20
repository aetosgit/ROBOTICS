int mq2Pin = A0;
int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

  Serial.println("MQ2 Sensor Test Started");
}

void loop() {
  int gasValue = analogRead(mq2Pin);

  Serial.print("Gas Level: ");
  Serial.println(gasValue);

  if (gasValue > 400) {   // Alert threshold
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(1000);
}