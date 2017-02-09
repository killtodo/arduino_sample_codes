/*
 * VolatileVarSample.cpp
 *
 *  Created by bribin on Feb 8, 2017.
 */

#include "Arduino.h"

int pin = 13;
volatile byte state = LOW;

void blink() {
    state = !state;
}

void setup() {
    pinMode(pin, OUTPUT);
    attachInterrupt(0, blink, CHANGE);
}

void loop() {
    digitalWrite(pin, state);
}
