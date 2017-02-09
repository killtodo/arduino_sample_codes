/*
 * NoInterruptsSample.cpp
 *
 *  Created by bribin on Feb 8, 2017.
 */

#include "Arduino.h"

void setup() {
}

void loop() {
    noInterrupts();
    // critical, time-sensitive code here
    interrupts();
    // other code here
}
