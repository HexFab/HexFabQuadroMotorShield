#ifndef DCMotor_h
#define DCMotor_h

#include "Arduino.h"

class DCMotor {
  public:
    DCMotor(
        int pin_diac_a,
        int pin_diac_b,
        int pin_in_a,
        int pin_in_b,
        int pin_pwm,
        int pin_cs);
    void setSpeed(int speed);
    void stop();
    int readCurrentSensor();
    bool hasError();

  private:
    int pin_diac_a;
    int pin_diac_b;
    int pin_in_a;
    int pin_in_b;
    int pin_pwm;
    int pin_cs;
};

#endif
