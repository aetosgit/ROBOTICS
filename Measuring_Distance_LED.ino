
 
#define trigPin 9 // Connect trigpin to D6 on Arduino
#define echoPin 10 // Connect echopin to D5 on Arduino
#define led 13
// defines variables

long duration; // It's a variable for the duration of sound wave travel
int inchdistance; // It's a variable for measurement of distance in inches
int cmdistance; // It's a variable for measurement of distance in centimeters

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  pinMode(led, OUTPUT);
  Serial.begin(9600); // // For Serial Communication
}

void loop() {
  
  digitalWrite(trigPin, LOW); // Clears the trigPin condition
  delay(2000); 
  digitalWrite(trigPin, HIGH);
  delay(2000);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH); // Reads the echoPin, returns the sound wave travel time in microseconds

  // Calculating the distance
  
  inchdistance = duration * 0.0133858 / 2; // To calculate the distance in inch
  cmdistance = duration * 0.034 / 2; // To calculate the distance in cm
  
  // Displays the distance on the Serial Monitor
  
  Serial.print("Distance: ");
  Serial.print(inchdistance);
  Serial.print(" inch | ");
  Serial.print(cmdistance);
  Serial.print(" cm");
  Serial.println("");
  if(cmdistance<10)
  digitalWrite(led,HIGH);
  else
  digitalWrite(led,LOW);
}