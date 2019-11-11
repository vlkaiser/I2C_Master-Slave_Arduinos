# I2C_Master-Slave_Arduinos
Transmit single character (incrementing value) from Master Arduino to Slave Arduino over I2C.  

Includes: Serial print for monitoring, and onboard LED indicator on Slave device.  

Requires: 2 Arduinos, 3 jumper wires, and no external circuitry.
Uses Library <Wire.h>

Wire between Arduinos as described.
Load: I2C Master on one arduino
Load: I2C Slave on a separate arduino
Open Serial Monitor (I2C Slave to watch RXd data) and verify communication.

