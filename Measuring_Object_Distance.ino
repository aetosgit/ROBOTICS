int trigger_pin = 11;
int echo_pin = 12;

long duration;
int distance;

void setup(){
pinMode(trigger_pin, OUTPUT);
pinMode(LED_BUILTIN, OUTPUT);
pinMode(echo_pin, INPUT);
Serial.begin(9600);
}

void loop(){
  digitalWrite(trigger_pin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigger_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger_pin, LOW);

  duration = pulseIn(echo_pin, HIGH);
  distance = duration*0.034/2;

  if (distance <15)
  digitalWrite(LED_BUILTIN, HIGH);
  else
  digitalWrite(LED_BUILTIN, LOW);
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(1000);
}