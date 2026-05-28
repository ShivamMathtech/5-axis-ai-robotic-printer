#include <Arduino.h>
#include <PID_v1.h>

#include "pid_control.h"
#include "pins.h"
#include "sensors.h"

double Setpoint;
double Input;
double Output;

PID myPID(
    &Input,
    &Output,
    &Setpoint,
    2,
    5,
    1,
    DIRECT
);

void initPID()
{
    pinMode(HEATER_PIN, OUTPUT);

    Setpoint = 210;

    myPID.SetMode(AUTOMATIC);
}

void monitorTemperature()
{
    Input = readTemperature();

    myPID.Compute();

    analogWrite(
        HEATER_PIN,
        Output
    );

    Serial.print("Temp: ");
    Serial.println(Input);
}