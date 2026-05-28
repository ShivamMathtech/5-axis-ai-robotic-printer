#include <Arduino.h>

#include "motor_control.h"
#include "kinematics.h"
#include "sensors.h"
#include "pid_control.h"

void setup()
{
    Serial.begin(115200);

    initMotors();

    initSensors();

    initPID();

    homeAllAxes();

    Serial.println("5-Axis Robotic Arm Ready");
}

void loop()
{
    monitorTemperature();

    monitorVibration();

    computeInverseKinematics(
        150,
        100,
        50
    );

    delay(1000);
}