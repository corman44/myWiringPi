/*
 * Author - Cory Johnson
 * 
 * Attempting to recrete some basic functionalities of the WiringPi by Drogon
 * Funcitonality -> Read, Write
 */

#include <stdint.h>
#include <iostream>
#include "myWPi.h"

using namespace std;

// Used for testing the Functions
int main(int argv, char *argc[])
{
  int i = 0, val = 0;
  
  for(i = 0; i<41; i++)
  {
    cout << "Pin " << i << "is set to " << p_read(i) << endl;
  }
  
  return 0;
}

int p_read(int pin)
{//use the level registers to read values
  uint32_t bitmask = pin, address;
  int *value;
  int x,y;
  
  //set address and bitmask
  //two level registers for the 41 Registers
  if(pin < 32 && pin >= 0)
    address = (GPIO_BASE_ADDRESS + GPLEV0);
  
  if(pin > 31 && pin < 41)
  {//for level 1 reg
    address = (GPIO_BASE_ADDRESS + GPLEV1);
    bitmask -= 32;
  }

  value = (int*)address;
  x = (int)bitmask;
  y = (int)*value;

  return (int)(x & y);
}

int p_write(int pin, int mode)
{
  
}

int p_mode(int pin, int mode)
{
  
  
}