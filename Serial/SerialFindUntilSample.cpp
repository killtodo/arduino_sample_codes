/*
 * SerialFindUntilSample.cpp
 *
 *  Created by bribin on Mar 1, 2017.
 */

// Serial.findUntil() reads data from the serial buffer until a target string of given length or terminator string is found.
// The function returns true if the target string is found, false if it times out.
//
// Serial.findUntil() inherits from the Stream utility class.
//
// Serial.findUntil(target, terminal)
//
// target : the string to search for (char)
// terminal : the terminal string in the search (char)
