#include <Servo.h>

Servo myServo;  // Create servo object

void setup() {
  myServo.attach(9);  // Attach servo to pin 9
  Serial.begin(9600);
}

void loop() {

  // Move from 0° to 180°
  for (int angle = 0; angle <= 180; angle += 30) {
    myServo.write(angle);

    Serial.print("Angle: ");
    Serial.println(angle);

    delay(1000);
  }

  // Move from 180° back to 0°
  for (int angle = 180; angle >= 0; angle -= 30) {
    myServo.write(angle);

    Serial.print("Angle: ");
    Serial.println(angle);

    delay(1000);
  }
}