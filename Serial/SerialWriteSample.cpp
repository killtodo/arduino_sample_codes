/*
 * SerialWriteSample.cpp
 *
 *  Created by bribin on Mar 1, 2017.
 */

//Writes binary data to the serial port.
//This data is sent as a byte or series of bytes;
//to send the characters representing the digits of a number use the print() function instead.
//
//Serial.write(val)
//Serial.write(str)
//Serial.write(buf, len)
//
//Arduino Mega also supports: Serial1, Serial2, Serial3 (in place of Serial)
//
//val: a value to send as a single byte
//str: a string to send as a series of bytes
//buf: an array to send as a series of bytes
//len: the length of the buffer
//
//write() will return the number of bytes written, though reading that number is optional
//
#include "Arduino.h"

void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.write(45); // send a byte with the value 45

    int bytesSent = Serial.write("hello"); //send the string “hello” and return the length of the string.
}
