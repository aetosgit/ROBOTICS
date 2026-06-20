#include <Wire.h>
#include <MPU6050.h>

MPU6050 mpu;

void setup() {
  Serial.begin(9600);

  Wire.begin();
  mpu.begin();

  Serial.println("MPU6050 Gyroscope Started");
}

void loop() {
  mpu.update();

  Serial.print("Gyro X: ");
  Serial.print(mpu.getGyroX());

  Serial.print(" | Y: ");
  Serial.print(mpu.getGyroY());

  Serial.print(" | Z: ");
  Serial.println(mpu.getGyroZ());

  delay(1000);
}