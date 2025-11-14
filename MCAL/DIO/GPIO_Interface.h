/*  
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<     GPIO_Interface.h    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
   author : Aysha Shaban Galal
   Layer  : MCAL 
   SWC    : GPIO / DIO

*/

typedef enum {
	DIO_NOK,
	DIO_OK
}DIO_ErrorStatus;

#ifndef _GPIO_INTERFACE_H_
#define _GPIO_INTERFACE_H_

#define DIO_PIN_OUTPUT 1
#define DIO_PIN_INPUT  0

#define DIO_PIN_HIGH   1
#define DIO_PIN_LOW    0

#define DIO_PORTA  0
#define DIO_PORTB  1
#define DIO_PORTC  2
#define DIO_PORTD  3 

#define DIO_PIN0   0
#define DIO_PIN1   1
#define DIO_PIN2   2
#define DIO_PIN3   3
#define DIO_PIN4   4
#define DIO_PIN5   5
#define DIO_PIN6   6
#define DIO_PIN7   7

void Port_Direction(char bais , char state);
void GPIO_VoidSetPinDirection ( u8 copy_u8PORT , u8 copy_u8PIN , u8 copy_u8Direction );
void GPIO_VoidSetPinValue     ( u8 copy_u8PORT , u8 copy_u8PIN , u8 copy_u8Value     );
u8   GPIO_GetPinValue         ( u8 copy_u8PORT , u8 copy_u8PIN                       );


char Port_Read(char bais);
void Bin_Set(char bais ,char bin);
void Bin_Reset(char bais ,char bin);
void Port_Write(char bais ,char value);

#endif