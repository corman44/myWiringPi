#ifndef MYPI_H
#define MYWPI_H

#define GPIO_BASE_ADDRESS 0x7e200000

//input and output function select register values
#define GPFsel_IN   0b000
#define GPFsel_OUT  0b001

#define GPSet_UNSET   0b0
#define GPSet_ACTIVE  0b1

#define GPClr_UNSET 0b0
#define GPClr_CLR   0b1

#define GPLEV0  Num2Add(13)  //13th register from base
#define GPLEV1  Num2Add(14)  //14th register from base

//Macro for converting register value to change in address
#define Num2Add(X)  X*4

// Prototypes
int p_read(int pin);
int p_write(int pin, int val);
int p_mode(int pin, int mode);

#endif