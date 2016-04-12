#include <HexFabQuadroMotorShield.h>

/* This example generates a triangle speed function on motor 1 */

void setup() {
  HFMotor1.stop();
}

void loop() {
  delay(10);
  HFMotor1.setSpeed(nextSpeed());
}

int nextSpeed() {
  static int mySpeed = 0;
  static int speedDelta = 1;

  mySpeed += speedDelta;
  if (mySpeed == 255) {
    speedDelta = -1;
  }
  else if (mySpeed == -255) {
    speedDelta = 1;
  }
  return mySpeed;
}
