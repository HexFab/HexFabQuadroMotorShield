#include <HexFabQuadroMotorShield.h>

void setup() {
    HFMotor1.setSpeed(-200);
    HFMotor2.setSpeed(100);
    HFMotor3.setSpeed(-100);
    HFMotor4.setSpeed(255);
}

void loop() {
    motor1.setSpeed(1);
    motor2.setSpeed(1);
}
