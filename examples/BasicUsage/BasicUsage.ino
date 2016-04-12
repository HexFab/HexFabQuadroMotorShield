#include <HexFabQuadroMotorShield.h>

void setup() {
  HFMotor1.setSpeed(255);
  HFMotor2.setSpeed(100);
  HFMotor3.setSpeed(-100);
  HFMotor4.setSpeed(-255);
}

void loop() {
  // stop and start motor 1
  delay(1000);
  HFMotor1.stop();
  delay(1000);
  HFMotor1.setSpeed(255);
}
