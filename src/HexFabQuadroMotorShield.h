#ifndef HexFabQuadroMotorShield_h
#define HexFabQuadroMotorShield_h

#include "DCMotor.h"

// Initialize all motor drivers available on the shield
// (HFMotor is short for HexFabMotor)
DCMotor HFMotor1 = DCMotor(39, 40, 38, 41, 13, A7);
DCMotor HFMotor2 = DCMotor(43, 44, 42, 45, 12, A6);
DCMotor HFMotor3 = DCMotor(47, 48, 46, 49, 11, A5);
DCMotor HFMotor4 = DCMotor(51, 52, 50, 53, 10, A4);

#endif
