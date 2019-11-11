#include <Wire.h>

int LED = 13;
int x = 0;

void setup() 
{
pinMode(LED, OUTPUT);
Serial.begin(9600);
Wire.begin(9);          //Start I2C Bus as Slave on addr 9
Wire.onReceive(receiveEvent); //attach a fnc to trigger when sth is RXd
}

void receiveEvent(int bytes)
{
  x = Wire.read();    //read 1 char from I2C
 Serial.print("RX: ");
  Serial.print(x);
  Serial.print("\n");
}

void loop() 
{
  //blink LED based on value RX'd
  if(x == '0')
  {
    digitalWrite(LED, HIGH);
    delay(200);
    digitalWrite(LED, LOW);
    delay(200);
  }
  if(x == '3')
  {
    digitalWrite(LED, HIGH);
    delay(400);
    digitalWrite(LED, LOW);
    delay(400);
  }
}
