#include <Arduino.h>

#include "pins.h"

void extruderOn()
{
    digitalWrite(HEATER_PIN, HIGH);
}

void extruderOff()
{
    digitalWrite(HEATER_PIN, LOW);
}