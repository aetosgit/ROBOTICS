const int trigPin = 3;
const int echoPin = 2;

const float speedOfSound = 0.0343;

long duration;
float distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH, 30000);

  if (duration == 0) {
    Serial.println("Out of range");
  } else {
    distance = duration * speedOfSound / 2.0;

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
  }

  delay(1000);
}