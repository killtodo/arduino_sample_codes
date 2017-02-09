/*
 * StaticVarSample.cpp
 *
 *  Created by bribin on Feb 8, 2017.
 */

#include "Arduino.h"

#define randomWalkLowRange -20
#define randomWalkHighRange 20
int stepsize;

int thisTime;
int total;

void setup() {
    Serial.begin(9600);
}

int randomWalk(int moveSize) {
    static int place;     // variable to store value in random walk - declared static so that it stores
                          // values in between function calls, but no other functions can change its value

    place = place + (random(-moveSize, moveSize + 1));

    if (place < randomWalkLowRange) {                    // check lower and upper limits
        place = place + (randomWalkLowRange - place);     // reflect number back in positive direction
    } else if (place > randomWalkHighRange) {
        place = place - (place - randomWalkHighRange);     // reflect number back in negative direction
    }

    return place;
}

void loop() {        //  tetst randomWalk function
    stepsize = 5;
    thisTime = randomWalk(stepsize);
    Serial.println(thisTime);
    delay(10);
}

