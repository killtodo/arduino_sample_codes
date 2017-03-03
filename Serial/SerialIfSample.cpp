/*
 * SerialIfSample.cpp
 *
 *  Created by bribin on Mar 1, 2017.
 */

#include "Arduino.h"

// Arduino Leonardo specific:
//  if (Serial1)
// Arduino Mega specific:
//  if (Serial1)
//  if (Serial2)
//  if (Serial3)

void setup() {
    //Initialize serial and wait for port to open:
    Serial.begin(9600);
    while (!Serial) {
        ; // wait for serial port to connect. Needed for native USB
    }
}

void loop() {
    //proceed normally
}

