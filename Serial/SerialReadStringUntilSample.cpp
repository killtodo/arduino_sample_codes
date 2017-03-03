/*
 * SerialReadStringUntilSample.cpp
 *
 *  Created by bribin on Mar 1, 2017.
 */

//readStringUntil() reads characters from the serial buffer into a string.
//The function terminates if the terminator character is detected or it times out (see setTimeout()).
//
//This function is part of the Stream class, and is called by any class that inherits from it (Wire, Serial, etc).
//
//Serial.readStringUntil(terminator)
//
//terminator : the character to search for (char)
