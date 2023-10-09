void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
  float sensorValue = analogRead(A0);
  // Reads the analog input ranging from 0 to 1023
  Serial.println(sensorValue);
  if(sensorValue<=400)
  {
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else
  digitalWrite(LED_BUILTIN,LOW);
}