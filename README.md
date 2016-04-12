# HexFAB Quadro Motor Shield Library

- Publisher: HexFAB (www.0xfab.de)
- License: MIT
- Motor driver: VNH2SP30-E


## Arduino pin connection table:

       | Driver 1  | Driver 2  | Driver 3  | Driver 4
-------+-----------+-----------+-----------+----------
DIAC A | 39        | 43        | 47        | 51
DIAC B | 40        | 44        | 48        | 52
In A   | 38        | 42        | 46        | 50
In B   | 41        | 45        | 49        | 53
PWM    | 13        | 12        | 11        | 10
CS     | A7        | A6        | A5        | A4


## Pin functions (excerpt from VNH2SP30-E datasheet):

### DIAC:
Open drain bidirectional logic pins. These pins must be connected to an
external pull up resistor. When externally pulled low, they disable half-bridge
A or B. In case of fault detection (thermal shutdown of a high side FET or
excessive ON state voltage drop across a low side FET), these pins are pulled
low by the device (see truth table in fault condition).

### IN:
Voltage controlled input pins with hysteresis, CMOS compatible. These two pins
control the state of the bridge in normal operation according to the truth
table (brake to VCC, brake to GND, clockwise and counterclockwise).

### PWM:
Voltage controlled input pin with hysteresis, CMOS compatible. Gates of low
side FETs are modulated by the PWM signal during their ON phase allowing speed
control of the motor

### CS:
Analog current sense output. This output sources a current proportional to the
motor current. The information can be read back as an analog voltage across an
external resistor.
