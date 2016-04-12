#include <HexFabQuadroMotorShield.h>

void setup() {
  Serial.begin(9600);
  HFMotor1.setSpeed(255);
}

void loop() {
  int current = HFMotor1.readCurrentSensor();

  Serial.print("Motor1 current: ");
  Serial.println(current);
}
