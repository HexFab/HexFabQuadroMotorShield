#include <HexFabQuadroMotorShield.h>

void setup() {

}

void loop() {
  delay(4);
  HFMotor1.setSpeed(255);
  delay(100);
  HFMotor1.stop();
}
