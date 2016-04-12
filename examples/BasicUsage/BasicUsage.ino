#include <HexFabQuadroMotorShield.h>

void setup() {
    motor1.init();
    motor2.init();
    motor3.init();
    motor4.init();
}

void loop() {
    motor1.setSpeed(1);
    motor2.setSpeed(1);
}
