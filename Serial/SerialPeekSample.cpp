/*
 * SerialPeekSample.cpp
 *
 *  Created by bribin on Mar 1, 2017.
 */

//Returns the next byte (character) of incoming serial data without removing it from the internal serial buffer.
//That is, successive calls to peek() will return the same character, as will the next call to read().
//
//peek() inherits from the Stream utility class.
//
//Serial.peek()
//
//Arduino Mega only:
//Serial1.peek()
//Serial2.peek()
//Serial3.peek()
//
//return the first byte of incoming serial data available (or -1 if no data is available) - int
//
