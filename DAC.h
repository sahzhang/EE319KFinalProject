// put prototypes for public functions, explain what it does
// put your names here, date

#include <stdint.h>
#include "tm4c123gh6pm.h"

// **************DAC_Init*********************
// Initialize 4-bit DAC, called once 
// Input: none
// Output: none
void DAC_Init(void);
	

// **************DAC_Out*********************
// output to DAC
// Input: 4-bit data, 0 to 15 
// Output: none
void DAC_Out(uint32_t data);

