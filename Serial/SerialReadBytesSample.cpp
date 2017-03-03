/*
 * SerialReadBytesSample.cpp
 *
 *  Created by bribin on Mar 1, 2017.
 */

//Serial.readBytes() reads characters from the serial port into a buffer.
//The function terminates if the determined length has been read, or it times out (see Serial.setTimeout()).
//
//Serial.readBytes() returns the number of characters placed in the buffer.
//A 0 means no valid data was found.
//
//Serial.readBytes() inherits from the Stream utility class.
//
//Serial.readBytes(buffer, length)
//
//buffer: the buffer to store the bytes in (char[] or byte[])
//length : the number of bytes to read (int)
//
