/*
 * DelayMicrosSample.cpp
 *
 *  Created by bribin on Feb 9, 2017.
 */

#include "Arduino.h"

int outPin = 8;                 // digital pin 8

void setup() {
    pinMode(outPin, OUTPUT);      // sets the digital pin as output
}

void loop() {
    digitalWrite(outPin, HIGH);   // sets the pin on
    delayMicroseconds(50);        // pauses for 50 microseconds
    digitalWrite(outPin, LOW);    // sets the pin off
    delayMicroseconds(50);        // pauses for 50 microseconds
}
