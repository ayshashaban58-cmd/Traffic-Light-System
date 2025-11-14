
/*  
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<     LED_program.c    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
   author : Aysha Shaban Galal
   Layer  : HAL 
   SWC    : LED
*/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "GPIO_Interface.h"
#include "LED_interface.h"

void LED_VoidInit(LED_TYPE led) {
    GPIO_VoidSetPinDirection(led.port, led.pin, DIO_PIN_OUTPUT);
    LED_VoidOff(led);
}

void LED_VoidOn(LED_TYPE led) {
    if (led.active_state == LED_PIN_HIGH) {
        GPIO_VoidSetPinValue(led.port, led.pin, DIO_PIN_HIGH);
    } else {
        GPIO_VoidSetPinValue(led.port, led.pin, DIO_PIN_LOW);
    }
}

void LED_VoidOff(LED_TYPE led) {
    if (led.active_state == LED_PIN_HIGH) {
        GPIO_VoidSetPinValue(led.port, led.pin, DIO_PIN_LOW);
    } else {
        GPIO_VoidSetPinValue(led.port, led.pin, DIO_PIN_HIGH);
    }
}

void LED_VoidToggle(LED_TYPE led) {
    u8 current_value = GPIO_GetPinValue(led.port, led.pin);
    if (current_value == DIO_PIN_HIGH) {
        GPIO_VoidSetPinValue(led.port, led.pin, DIO_PIN_LOW);
    } else {
        GPIO_VoidSetPinValue(led.port, led.pin, DIO_PIN_HIGH);
    }
}



