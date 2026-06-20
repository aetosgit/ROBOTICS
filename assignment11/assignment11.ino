const int pirPin = 7;
const int ledPin = 4;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
  Serial.println("PIR Motion Sensor Test Started");
}

void loop() {

  int motion = digitalRead(pirPin);

  if (motion == HIGH) {
    digitalWrite(ledPin, HIGH);

    Serial.println("Motion Detected!");
  }
  else {
    digitalWrite(ledPin, LOW);

    Serial.println("No Motion");
  }

  delay(500);
}