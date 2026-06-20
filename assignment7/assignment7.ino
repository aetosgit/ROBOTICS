const int trigPin = 6;
const int echoPin = 7;
const int buzzerPin = 3;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  Serial.begin(9600);
  Serial.println("Car Parking Sensor Started");
}

void loop() {

  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  // Measure echo duration
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance in cm
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Activate buzzer if object is close
  if (distance < 10) {
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
  }

  delay(500);
}