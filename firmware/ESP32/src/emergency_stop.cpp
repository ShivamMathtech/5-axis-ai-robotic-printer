#include <Arduino.h>

#include "pins.h"
#include "motor_control.h"

void emergencyCheck()
{
    if(
        digitalRead(ESTOP_PIN)
        == LOW
    )
    {
        disableMotors();

        Serial.println(
            "EMERGENCY STOP ACTIVATED"
        );

        while(true);
    }
}