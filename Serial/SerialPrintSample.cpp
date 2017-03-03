/*
 * SerialPrintSample.cpp
 *
 *  Created by bribin on Mar 1, 2017.
 */

//Prints data to the serial port as human-readable ASCII text.
//
//Numbers are printed using an ASCII character for each digit.
//Floats are similarly printed as ASCII digits, defaulting to two decimal places.
//Bytes are sent as a single character. Characters and strings are sent as is.
//
//Serial.print(78) gives "78"
//Serial.print(1.23456) gives "1.23"
//Serial.print('N') gives "N"
//Serial.print("Hello world.") gives "Hello world."
//
//An optional second parameter specifies the base (format) to use;
//permitted values are BIN (binary, or base 2), OCT (octal, or base 8), DEC (decimal, or base 10), HEX (hexadecimal, or base 16).
//For floating point numbers, this parameter specifies the number of decimal places to use.
//
//Serial.print(78, BIN) gives "1001110"
//Serial.print(78, OCT) gives "116"
//Serial.print(78, DEC) gives "78"
//Serial.print(78, HEX) gives "4E"
//Serial.println(1.23456, 0) gives "1"
//Serial.println(1.23456, 2) gives "1.23"
//Serial.println(1.23456, 4) gives "1.2346"
//
//You can pass flash-memory based strings to Serial.print() by wrapping them with F().
//
//Serial.print(F(“Hello World”))
//
//To send a single byte, use Serial.write().
//
//Serial.print(val)
//Serial.print(val, format)
//
//val: the value to print - any data type
//format: specifies the number base (for integral data types) or number of decimal places (for floating point types)
//
//size_t (long): print() returns the number of bytes written, though reading that number is optional
//
#include "Arduino.h"

/*
 Uses a FOR loop for data and prints a number in various formats.
 */
int x = 0;    // variable

void setup() {
    Serial.begin(9600);      // open the serial port at 9600 bps:
}

void loop() {
    // print labels
    Serial.print("NO FORMAT");       // prints a label
    Serial.print("\t");              // prints a tab

    Serial.print("DEC");
    Serial.print("\t");

    Serial.print("HEX");
    Serial.print("\t");

    Serial.print("OCT");
    Serial.print("\t");

    Serial.print("BIN");
    Serial.print("\t");

    for (x = 0; x < 64; x++) {    // only part of the ASCII chart, change to suit

        // print it out in many formats:
        Serial.print(x);       // print as an ASCII-encoded decimal - same as "DEC"
        Serial.print("\t");    // prints a tab

        Serial.print(x, DEC);  // print as an ASCII-encoded decimal
        Serial.print("\t");    // prints a tab

        Serial.print(x, HEX);  // print as an ASCII-encoded hexadecimal
        Serial.print("\t");    // prints a tab

        Serial.print(x, OCT);  // print as an ASCII-encoded octal
        Serial.print("\t");    // prints a tab

        Serial.println(x, BIN);  // print as an ASCII-encoded binary
        //                             then adds the carriage return with "println"
        delay(200);            // delay 200 milliseconds
    }
    Serial.println("");      // prints another carriage return
}
