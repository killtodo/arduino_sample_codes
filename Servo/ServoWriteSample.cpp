/*
 * ServoWriteSample.cpp
 *
 *  Created by bribin on Mar 5, 2017.
 */

//Writes a value to the servo, controlling the shaft accordingly.
//
//On a standard servo, this will set the angle of the shaft (in degrees), moving the shaft to that orientation.
//On a continuous rotation servo, this will set the speed of the servo
//  (with 0 being full-speed in one direction, 180 being full speed in the other, and a value near 90 being no movement).
//
//servo.write(angle)
//
//servo: a variable of type Servo
//angle: the value to write to the servo, from 0 to 180
//
#include <Servo.h>

Servo myservo;

void setup() {
    myservo.attach(9);
    myservo.write(90);  // set servo to mid-point
}

void loop() {
}
