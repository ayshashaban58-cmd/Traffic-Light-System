/*  
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<     DELAY_interface.h    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
   author : Aysha Shaban Galal
   Layer  : HAL 
   SWC    : DELAY
*/
#ifndef _DELAY_INTERFACE_H_
#define _DELAY_INTERFACE_H_

#ifndef F_CPU
#define F_CPU 8000000UL
#endif

void DELAY_VoidMs(u16 copy_u16DelayMs);
void DELAY_VoidUs(u16 copy_u16DelayUs);
void DELAY_VoidSec(u8 copy_u8DelaySec);

#endif