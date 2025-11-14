/*  
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<     DELAY_program.c    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
   author : Aysha Shaban Galal
   Layer  : HAL 
   SWC    : DELAY
*/
#include "STD_TYPES.h"
#include <util/delay.h>
#include "DELAY_interface.h"

void DELAY_VoidMs(u16 copy_u16DelayMs) {
    while(copy_u16DelayMs--) {
        _delay_ms(1);
    }
}

void DELAY_VoidUs(u16 copy_u16DelayUs) {
    while(copy_u16DelayUs--) {
        _delay_us(1);
    }
}

void DELAY_VoidSec(u8 copy_u8DelaySec) {
    u8 i;
    for(i = 0; i < copy_u8DelaySec; i++) {
        _delay_ms(1000);
    }
}
