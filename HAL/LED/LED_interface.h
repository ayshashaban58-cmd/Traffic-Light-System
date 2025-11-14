/*  
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<     LED_interface.h    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
   author : Aysha Shaban Galal
   Layer  : HAL 
   SWC    : LED

*/

#ifndef _LED_INTERFACE_H_
#define _LED_INTERFACE_H_

#define LED_PIN_HIGH   1
#define LED_PIN_LOW    0
		
#define LED_PORTA  0
#define LED_PORTB  1
#define LED_PORTC  2
#define LED_PORTD  3 
		
#define LED_PIN0   0
#define LED_PIN1   1
#define LED_PIN2   2
#define LED_PIN3   3
#define LED_PIN4   4
#define LED_PIN5   5
#define LED_PIN6   6
#define LED_PIN7   7

typedef struct {
    u8 port;
    u8 pin;
    u8 active_state;
} LED_TYPE;

void LED_VoidInit  (LED_TYPE led);
void LED_VoidOn    (LED_TYPE led);
void LED_VoidOff   (LED_TYPE led);
void LED_VoidToggle(LED_TYPE led);
