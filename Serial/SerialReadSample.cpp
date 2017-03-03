/*
 * SerialReadSample.cpp
 *
 *  Created by bribin on Mar 1, 2017.
 */

//the first byte of incoming serial data available (or -1 if no data is available) - int
//
//Serial.read()
//
//Arduino Mega only:
//Serial1.read()
//Serial2.read()
//Serial3.read()
#include "Arduino.h"

int incomingByte = 0;   // for incoming serial data

void setup() {
    Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
}

void loop() {

    // send data only when you receive data:
    if (Serial.available() > 0) {
        // read the incoming byte:
        incomingByte = Serial.read();

        // say what you got:
        Serial.print("I received: ");
        Serial.println(incomingByte, DEC);
    }
}
