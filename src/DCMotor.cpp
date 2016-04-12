#include "DCMotor.h"

DCMotor::DCMotor(int pin_diac_a, int pin_diac_b, int pin_in_a, int pin_in_b,
                 int pin_pwm, int pin_cs) {
    this->pin_diac_a = pin_diac_a;
    this->pin_diac_b = pin_diac_b;
    this->pin_in_a = pin_in_a;
    this->pin_in_b = pin_in_b;
    this->pin_pwm = pin_pwm;
    this->pin_cs = pin_cs;

    pinMode(this->pin_diac_a, INPUT_PULLUP);
    pinMode(this->pin_diac_b, INPUT_PULLUP);
    pinMode(this->pin_in_a, OUTPUT);
    pinMode(this->pin_in_b, OUTPUT);
    pinMode(this->pin_pwm, OUTPUT);
    // the current sensor pin (pin_cs) does not need to be initialized.
}

void DCMotor::setSpeed(int speed) {
    // stop if speed is zero
    if (speed == 0) {
        stop();
    } else {
        // constraint speed to -255 <= speed <= 255
        speed = min(255, speed);
        speed = max(-255, speed);

        // set direction
        bool direction = (speed >= 0);
        digitalWrite(pin_in_a, direction);
        digitalWrite(pin_in_b, !direction);

        // set pwm pin
        analogWrite(pin_pwm, (uint8_t)abs(speed));
    }
}

void DCMotor::stop() {
    analogWrite(pin_pwm, 0);
}

int DCMotor::readCurrentSensor() {
    return analogRead(pin_cs);
}

bool DCMotor::hasError() {
    // In case of fault detection (thermal shutdown of a high side FET or
    // excessive ON state voltage drop across a low side FET),
    // the DIAC Pins are pulled low by the motor driver
    return (!digitalRead(pin_diac_a) || !digitalRead(pin_diac_b));
}
