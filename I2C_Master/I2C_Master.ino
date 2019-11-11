/*
 * I2C Communication - Single Character - (with Serial Verification) between 2 Arduinos
 * Master (TX) / Slave (RX)
 * 
 * Connect pin SDA (MS) to SDA (SL)
 * Connect pin SCL (MS) to SCL (SL)
 * Connect GND (MS) to GND (SL)
 * Program each device over USB on individual COM ports
 * Open Serial Monitor for either device to observe TX/RX characters
 *
 * VK Nov-11-2019
 */


#include <Wire.h>

int x = 0;
void setup() 
{
  Wire.begin();
  Serial.begin(9600);
}

void loop() 
{
  Serial.print("TX: ");
  Serial.print(x);
  Serial.print("\t");
  Wire.beginTransmission(9);    //Transmit to device #9
  Wire.write(x);                //Tx X
  Wire.endTransmission();       //Stop Transmitting
  x++;  
  if (x > 5) x = 0;           //reset 
  delay(500);
}
