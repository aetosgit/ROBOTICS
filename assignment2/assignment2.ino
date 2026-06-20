int potPin = A0;
int ledPin = 3;
int potValue = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  potValue = analogRead(potPin);  // Read potentiometer

  int brightness = map(potValue, 0, 1023, 0, 255);  // Convert to PWM range

  analogWrite(ledPin, brightness);  // Set LED brightness

  Serial.print("Potentiometer Value: ");
  Serial.println(potValue);

  delay(100);
}
