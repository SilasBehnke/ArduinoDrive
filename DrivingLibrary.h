
/*Driving Library*/

#ifndef DriveLibrary_h
#define DriveLibrary_h



#include "Arduino.h"
class DCMotor {
public: 
    DCMotor(int pinNumber, int directionPin1, int directionPin2);
    void setPower(float power); //output power

private:
    byte pin;
    byte dp1;
    byte dp2;




};
#endif
