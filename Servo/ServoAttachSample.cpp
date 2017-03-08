/*
 * ServoAttachSample.cpp
 *
 *  Created by bribin on Mar 5, 2017.
 */

//Attach the Servo variable to a pin.
//Note that in Arduino 0016 and earlier, the Servo library supports only servos on only two pins: 9 and 10.
//
//servo.attach(pin)
//servo.attach(pin, min, max)
//
//servo: a variable of type Servo
//pin: the number of the pin that the servo is attached to
//min (optional): the pulse width, in microseconds, corresponding to the minimum (0-degree) angle on the servo (defaults to 544)
//max (optional): the pulse width, in microseconds, corresponding to the maximum (180-degree) angle on the servo (defaults to 2400)
//
#include <Servo.h>

Servo myservo;

void setup() {
    myservo.attach(9);
}

void loop() {
}
