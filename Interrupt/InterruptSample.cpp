/*
 * InterruptSample.cpp
 *
 *  Created by bribin on Feb 8, 2017.
 */

#include "Arduino.h"

const byte ledPin = 13;
const byte interruptPin = 2;
volatile byte state = LOW;

void blink() {
    state = !state;
}

void setup() {
    pinMode(ledPin, OUTPUT);
    pinMode(interruptPin, INPUT_PULLUP);
    attachInterrupt(digitalPinToInterrupt(interruptPin), blink, CHANGE);
}

void loop() {
    digitalWrite(ledPin, state);
}
