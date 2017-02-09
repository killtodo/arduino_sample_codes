/*
 * MicrosSample.cpp
 *
 *  Created by bribin on Feb 9, 2017.
 */

#include "Arduino.h"

unsigned long time;

void setup() {
    Serial.begin(9600);
}
void loop() {
    Serial.print("Time: ");
    time = micros();
    //prints time since program started
    Serial.println(time);
    // wait a second so as not to send massive amounts of data
    delay(1000);
}

