/*  
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<     GPIO_Program.c    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
   author : Aysha Shaban Galal
   Layer  : MCAL 
   SWC    : GPIO / DIO
*/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "GPIO_Private.h"
#include "GPIO_Interface.h"

void Port_Direction(char bais, char state) {
    switch(bais) {
        case DIO_PORTA: DDRA_REG = state; break;
        case DIO_PORTB: DDRB_REG = state; break;
        case DIO_PORTC: DDRC_REG = state; break;
        case DIO_PORTD: DDRD_REG = state; break;
    }
}

void GPIO_VoidSetPinDirection(u8 copy_u8PORT, u8 copy_u8PIN, u8 copy_u8Direction) {
    if (copy_u8Direction == DIO_PIN_OUTPUT) {
        switch(copy_u8PORT) {
            case DIO_PORTA: SET_BIT(DDRA_REG, copy_u8PIN); break;
            case DIO_PORTB: SET_BIT(DDRB_REG, copy_u8PIN); break;
            case DIO_PORTC: SET_BIT(DDRC_REG, copy_u8PIN); break;
            case DIO_PORTD: SET_BIT(DDRD_REG, copy_u8PIN); break;
        }
    } else if (copy_u8Direction == DIO_PIN_INPUT) {
        switch(copy_u8PORT) {
            case DIO_PORTA: CLR_BIT(DDRA_REG, copy_u8PIN); break;
            case DIO_PORTB: CLR_BIT(DDRB_REG, copy_u8PIN); break;
            case DIO_PORTC: CLR_BIT(DDRC_REG, copy_u8PIN); break;
            case DIO_PORTD: CLR_BIT(DDRD_REG, copy_u8PIN); break;
        }
    }
}

void GPIO_VoidSetPinValue(u8 copy_u8PORT, u8 copy_u8PIN, u8 copy_u8Value) {
    if (copy_u8Value == DIO_PIN_HIGH) {
        switch(copy_u8PORT) {
            case DIO_PORTA: SET_BIT(PORTA_REG, copy_u8PIN); break;
            case DIO_PORTB: SET_BIT(PORTB_REG, copy_u8PIN); break;
            case DIO_PORTC: SET_BIT(PORTC_REG, copy_u8PIN); break;
            case DIO_PORTD: SET_BIT(PORTD_REG, copy_u8PIN); break;
        }
    } else if (copy_u8Value == DIO_PIN_LOW) {
        switch(copy_u8PORT) {
            case DIO_PORTA: CLR_BIT(PORTA_REG, copy_u8PIN); break;
            case DIO_PORTB: CLR_BIT(PORTB_REG, copy_u8PIN); break;
            case DIO_PORTC: CLR_BIT(PORTC_REG, copy_u8PIN); break;
            case DIO_PORTD: CLR_BIT(PORTD_REG, copy_u8PIN); break;
        }
    }
}

u8 GPIO_GetPinValue(u8 copy_u8PORT, u8 copy_u8PIN) {
    u8 value = 0;
    switch(copy_u8PORT) {
        case DIO_PORTA: value = GET_BIT(PINA_REG, copy_u8PIN); break;
        case DIO_PORTB: value = GET_BIT(PINB_REG, copy_u8PIN); break;
        case DIO_PORTC: value = GET_BIT(PINC_REG, copy_u8PIN); break;
        case DIO_PORTD: value = GET_BIT(PIND_REG, copy_u8PIN); break;
    }
    return value;
}

char Port_Read(char bais) {
    char value = 0;
    switch(bais) {
        case DIO_PORTA: value = PINA_REG; break;
        case DIO_PORTB: value = PINB_REG; break;
        case DIO_PORTC: value = PINC_REG; break;
        case DIO_PORTD: value = PIND_REG; break;
    }
    return value;
}

void Bin_Set(char bais, char bin) {
    switch(bais) {
        case DIO_PORTA: SET_BIT(PORTA_REG, bin); break;
        case DIO_PORTB: SET_BIT(PORTB_REG, bin); break;
        case DIO_PORTC: SET_BIT(PORTC_REG, bin); break;
        case DIO_PORTD: SET_BIT(PORTD_REG, bin); break;
    }
}

void Bin_Reset(char bais, char bin) {
    switch(bais) {
        case DIO_PORTA: CLR_BIT(PORTA_REG, bin); break;
        case DIO_PORTB: CLR_BIT(PORTB_REG, bin); break;
        case DIO_PORTC: CLR_BIT(PORTC_REG, bin); break;
        case DIO_PORTD: CLR_BIT(PORTD_REG, bin); break;
    }
}

void Port_Write(char bais, char value) {
    switch(bais) {
        case DIO_PORTA: PORTA_REG = value; break;
        case DIO_PORTB: PORTB_REG = value; break;
        case DIO_PORTC: PORTC_REG = value; break;
        case DIO_PORTD: PORTD_REG = value; break;
    }
}