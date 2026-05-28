#ifndef MOTOR_CONTROL_H
#define MOTOR_CONTROL_H

void initMotors();

void moveAxis(
    int stepPin,
    int dirPin,
    int steps,
    bool direction
);

void homeAllAxes();

void disableMotors();

#endif