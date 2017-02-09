/*
 * ProgmemSample.cpp
 *
 *  Created by bribin on Feb 8, 2017.
 */

#include "Arduino.h"
#include <avr/pgmspace.h>

// save some unsigned ints
const PROGMEM uint16_t charSet[] = { 65000, 32796, 16843, 10, 11234 };

// save some chars
const char signMessage[] PROGMEM = { "I AM PREDATOR,  UNSEEN COMBATANT. CREATED BY THE UNITED STATES DEPART" };

const char string_0[] PROGMEM = "String 0";   // "String 0" etc are strings to store - change to suit.
const char string_1[] PROGMEM = "String 1";
const char string_2[] PROGMEM = "String 2";
const char string_3[] PROGMEM = "String 3";
const char string_4[] PROGMEM = "String 4";
const char string_5[] PROGMEM = "String 5";

// Then set up a table to refer to your strings.

const char* const string_table[] PROGMEM = { string_0, string_1, string_2, string_3, string_4, string_5 };

char buffer[30];    // make sure this is large enough for the largest string it must hold

unsigned int displayInt;
int k;    // counter variable
char myChar;

void setup() {
    Serial.begin(9600);
    while (!Serial)
        ;

    // put your setup code here, to run once:
    // read back a 2-byte int
    for (k = 0; k < 5; k++) {
        displayInt = pgm_read_word_near(charSet + k);
        Serial.println(displayInt);
    }
    Serial.println();

    // read back a char
    int len = strlen_P(signMessage);
    for (k = 0; k < len; k++) {
        myChar = pgm_read_byte_near(signMessage + k);
        Serial.print(myChar);
    }

    Serial.println();
}

void loop() {
    // put your main code here, to run repeatedly:

    for (int i = 0; i < 6; i++) {
        strcpy_P(buffer, (char*) pgm_read_word(&(string_table[i]))); // Necessary casts and dereferencing, just copy.
        Serial.println(buffer);
        delay(500);
    }
}

