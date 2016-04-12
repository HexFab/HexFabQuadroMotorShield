#include <HexFabQuadroMotorShield.h>

void setup() {
  Serial.begin(9600);
  HFMotor1.setSpeed(255);
}

void loop() {
  if (HFMotor1.hasError()) {
    Serial.println("Motor error detected!");
  }
}
