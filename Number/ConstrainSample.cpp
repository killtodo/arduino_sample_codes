/*
 * ConstrainSample.cpp
 *
 *  Created by bribin on Feb 9, 2017.
 */

#include "Arduino.h"

void setup() {

}

void loop() {
    int sensVal = 0;

    sensVal = constrain(sensVal, 10, 150);
    // limits range of sensor values to between 10 and 150
}
