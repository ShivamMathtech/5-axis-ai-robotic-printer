#include <Arduino.h>

#include "motor_control.h"
#include "pins.h"

void initMotors()
{
    pinMode(X_STEP_PIN, OUTPUT);
    pinMode(X_DIR_PIN, OUTPUT);

    pinMode(Y_STEP_PIN, OUTPUT);
    pinMode(Y_DIR_PIN, OUTPUT);

    pinMode(Z_STEP_PIN, OUTPUT);
    pinMode(Z_DIR_PIN, OUTPUT);

    pinMode(A_STEP_PIN, OUTPUT);
    pinMode(A_DIR_PIN, OUTPUT);

    pinMode(B_STEP_PIN, OUTPUT);
    pinMode(B_DIR_PIN, OUTPUT);
}

void moveAxis(
    int stepPin,
    int dirPin,
    int steps,
    bool direction
)
{
    digitalWrite(dirPin, direction);

    for(int i = 0; i < steps; i++)
    {
        digitalWrite(stepPin, HIGH);
        delayMicroseconds(500);

        digitalWrite(stepPin, LOW);
        delayMicroseconds(500);
    }
}

void homeAllAxes()
{
    Serial.println("Homing Axes...");
}

void disableMotors()
{
    Serial.println("Motors Disabled");
}