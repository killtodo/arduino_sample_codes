/*
 * ServoWriteMicrosecondsSample.cpp
 *
 *  Created by bribin on Mar 5, 2017.
 */

//Writes a value in microseconds (uS) to the servo, controlling the shaft accordingly.
//
//On a standard servo, this will set the angle of the shaft.
//  On standard servos a parameter value of 1000 is fully counter-clockwise, 2000 is fully clockwise, and 1500 is in the middle.
//Continuous-rotation servos will respond to the writeMicrosecond function in an analogous manner to the write function.
//
//Note that some manufactures do not follow this standard very closely so that servos often respond to values between 700 and 2300.
//Feel free to increase these endpoints until the servo no longer continues to increase its range.
//Note however that attempting to drive a servo past its endpoints (often indicated by a growling sound) is a high-current state, and should be avoided.
//
//servo.writeMicroseconds(uS)
//
//servo: a variable of type Servo
//uS: the value of the parameter in microseconds (int)
//
#include <Servo.h>

Servo myservo;

void setup() {
    myservo.attach(9);
    myservo.writeMicroseconds(1500);  // set servo to mid-point
}

void loop() {
}
