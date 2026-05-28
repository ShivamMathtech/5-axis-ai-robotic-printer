#ifndef PINS_H
#define PINS_H

// Stepper Pins

#define X_STEP_PIN 26
#define X_DIR_PIN  27

#define Y_STEP_PIN 14
#define Y_DIR_PIN  12

#define Z_STEP_PIN 25
#define Z_DIR_PIN  33

#define A_STEP_PIN 32
#define A_DIR_PIN  15

#define B_STEP_PIN 4
#define B_DIR_PIN  16

// Heater

#define HEATER_PIN 17

// Thermocouple

#define MAX6675_SO   19
#define MAX6675_CS   5
#define MAX6675_SCK  18

// Endstops

#define X_LIMIT 34
#define Y_LIMIT 35
#define Z_LIMIT 39

// Emergency

#define ESTOP_PIN 13

#endif