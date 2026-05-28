#include <Arduino.h>
#include <math.h>

#include "kinematics.h"

float theta1 = 0;
float theta2 = 0;
float theta3 = 0;

float L1 = 120.0;
float L2 = 100.0;

void computeInverseKinematics(
    float x,
    float y,
    float z
)
{
    theta1 = atan2(y, x);

    float r = sqrt((x*x) + (y*y));

    theta2 = atan2(z, r);

    theta3 = acos(
        (L1*L1 + L2*L2 - r*r)
        /
        (2 * L1 * L2)
    );

    Serial.println("Inverse Kinematics:");

    Serial.print("Theta1: ");
    Serial.println(theta1);

    Serial.print("Theta2: ");
    Serial.println(theta2);

    Serial.print("Theta3: ");
    Serial.println(theta3);
}