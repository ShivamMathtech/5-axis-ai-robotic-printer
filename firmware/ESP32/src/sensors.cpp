#include <Arduino.h>

#include "sensors.h"
#include "pins.h"

void initSensors()
{
    pinMode(X_LIMIT, INPUT_PULLUP);
    pinMode(Y_LIMIT, INPUT_PULLUP);
    pinMode(Z_LIMIT, INPUT_PULLUP);

    pinMode(ESTOP_PIN, INPUT_PULLUP);
}

float readTemperature()
{
    float temp = 200.0;

    return temp;
}

void monitorVibration()
{
    Serial.println("Monitoring vibration...");
}