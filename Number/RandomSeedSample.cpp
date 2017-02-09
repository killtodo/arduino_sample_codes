/*
 * RandomSeedSample.cpp
 *
 *  Created by bribin on Feb 8, 2017.
 */

#include "Arduino.h"

long randNumber;

void setup() {
    Serial.begin(9600);
    randomSeed(analogRead(0));
}

void loop() {
    randNumber = random(300);
    Serial.println(randNumber);

    delay(50);
}

