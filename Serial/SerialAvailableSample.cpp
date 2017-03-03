/*
 * SerialAvailableSample.cpp
 *
 *  Created by bribin on Mar 1, 2017.
 */

#include "Arduino.h"

// Get the number of bytes (characters) available for reading from the serial port.
// This is data that's already arrived and stored in the serial receive buffer (which holds 64 bytes).
//
// available() inherits from the Stream utility class.

//    Arduino Mega only:
//    Serial1.available()
//    Serial2.available()
//    Serial3.available()

int incomingByte = 0;   // for incoming serial data

void setup() {
    Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps

//    Serial1.begin(9600);
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

//    // read from port 0, send to port 1:
//      if (Serial.available()) {
//        int inByte = Serial.read();
//        Serial1.print(inByte, BYTE);
//
//      }
//      // read from port 1, send to port 0:
//      if (Serial1.available()) {
//        int inByte = Serial1.read();
//        Serial.print(inByte, BYTE);
//      }
}
