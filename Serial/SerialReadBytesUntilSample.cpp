/*
 * SerialReadBytesUntilSample.cpp
 *
 *  Created by bribin on Mar 1, 2017.
 */

//Serial.readBytesUntil() reads characters from the serial buffer into an array.
//The function terminates if the terminator character is detected, the determined length has been read, or it times out (see Serial.setTimeout()).
//
//Serial.readBytesUntil() returns the number of characters read into the buffer. A 0 means no valid data was found.
//
//Serial.readBytesUntil() inherits from the Stream utility class.
//
//Serial.readBytesUntil(character, buffer, length)
//
//character : the character to search for (char)
//buffer: the buffer to store the bytes in (char[] or byte[])
//length : the number of bytes to read (int)
//
