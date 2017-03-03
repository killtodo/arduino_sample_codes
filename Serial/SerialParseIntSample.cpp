/*
 * SerialParseIntSample.cpp
 *
 *  Created by bribin on Mar 1, 2017.
 */

//Looks for the next valid integer in the incoming serial stream.
//
//parseInt() inherits from the Stream utility class.
//
//In particular:
//Initial characters that are not digits or a minus sign, are skipped;
//Parsing stops when no characters have been read for a configurable time-out value, or a non-digit is read;
//If no valid digits were read when the time-out (see Serial.setTimeout()) occurs, 0 is returned;
//
//Serial.parseInt()
//
//Serial.parseInt(char skipChar)
//
//Arduino Mega only:
//Serial1.parseInt()
//Serial2.parseInt()
//Serial3.parseInt()
//
//skipChar: used to skip the indicated char in the search. Used for example to skip thousands divider.
