/*
 * SerialBeginSample.cpp
 *
 *  Created by bribin on Mar 1, 2017.
 */

// Sets the data rate in bits per second (baud) for serial data transmission.
// For communicating with the computer, use one of these rates: 300, 600, 1200, 2400, 4800, 9600, 14400, 19200, 28800, 38400, 57600, or 115200.
// You can, however, specify other rates - for example, to communicate over pins 0 and 1 with a component that requires a particular baud rate.
// An optional second argument configures the data, parity, and stop bits. The default is 8 data bits, no parity, one stop bit.

//Serial.begin(speed)
//Serial.begin(speed, config)
//
//Arduino Mega only:
//Serial1.begin(speed)
//Serial2.begin(speed)
//Serial3.begin(speed)
//Serial1.begin(speed, config)
//Serial2.begin(speed, config)
//Serial3.begin(speed, config)
//
//config: sets data, parity, and stop bits. Valid values are :
//
//SERIAL_5N1
//SERIAL_6N1
//SERIAL_7N1
//SERIAL_8N1 (the default)
//SERIAL_5N2
//SERIAL_6N2
//SERIAL_7N2
//SERIAL_8N2
//SERIAL_5E1
//SERIAL_6E1
//SERIAL_7E1
//SERIAL_8E1
//SERIAL_5E2
//SERIAL_6E2
//SERIAL_7E2
//SERIAL_8E2
//SERIAL_5O1
//SERIAL_6O1
//SERIAL_7O1
//SERIAL_8O1
//SERIAL_5O2
//SERIAL_6O2
//SERIAL_7O2
//SERIAL_8O2
