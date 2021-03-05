#include <Arduino.h>
#include "DrivingLibrary.h"

    DCMotor:: DCMotor(int pinNumber, int directionPin1, int directionPin2) {
        pinMode(pinNumber, OUTPUT);
        pin = pinNumber;

        pinMode(directionPin1, OUTPUT);
        dp1 = directionPin1;

        pinMode(directionPin2, OUTPUT);
        dp2 = directionPin2;
    }

    void DCMotor :: setPower(float power) { //sets a power
        int output = power * 255;
        if (power >= 0) {
            digitalWrite(dp1, 1);           //sets direction using L293D chip
            digitalWrite(dp1, 0);           //sets direction using L293D chip
            analogWrite(pin, output);       //sets motor speed using PWD~ pins
        }
        else {
            digitalWrite(dp1, 0);
            digitalWrite(dp1, 1);
            analogWrite(pin, -output);
        }
    } 


