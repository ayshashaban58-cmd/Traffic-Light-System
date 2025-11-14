/*  
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<     BIT_MATH.h    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
   author : Aysha Shaban Galal
   Layer  : LIB 

*/


#ifndef _BIT_MATH_H_
#define _BIT_MATH_H_

#define SET_BIT(reg,bit)     reg|=(1<<bit)
#define CLR_BIT(reg,bit)     reg&=(~(1<<bit))
#define TOG_BIT(reg,bit)     reg^=(1<<bit)
#define GET_BIT(reg,bit)     (reg&(1<<bit))>>bit

#define IS_SET_BIT(reg,bit)  (reg&(1<<bit))>>bit                           //هيعمل return بالقيمة اللي هتخرج و 0 يعني false و 1 يعني true
#define IS_CLR_BIT(reg,bit)  !((reg&(1<<bit))>>bit)                        //هيعمل return بالقيمة اللي هتخرج و 0 يعني false و 1 يعني true
#define ROR(reg,num)          reg=(reg<<(REGISTER_SIZE-num))|(reg>>(num))
#define ROL(reg,num)          reg=(reg>>(REGISTER_SIZE-num))|(reg<<(num))


#endif