/*  
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<     main.c    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
   author : Aysha Shaban Galal
   Project: Traffic Light System
   Date   : Nov 2025
   
   Description: 
   Traffic light control system using ATmega32 microcontroller
   - Red LED on PB0 (Active High) - 5 seconds
   - Yellow LED on PB1 (Active High) - 2 seconds  
   - Green LED on PB2 (Active High) - 5 seconds
*/

#include "STD_TYPES.h"
#include "GPIO_Interface.h"
#include "LED_interface.h"
#include "DELAY_interface.h"
#include "TRAFFIC_LIGHT_interface.h"

int main(void) {
    // Configure Traffic Light System
    TrafficLight_TYPE MyTrafficLight;
    
    // Configure Red LED on PB0
    MyTrafficLight.RedLED.port = LED_PORTB;
    MyTrafficLight.RedLED.pin = LED_PIN0;
    MyTrafficLight.RedLED.active_state = LED_PIN_HIGH;
    
    // Configure Yellow LED on PB1
    MyTrafficLight.YellowLED.port = LED_PORTB;
    MyTrafficLight.YellowLED.pin = LED_PIN1;
    MyTrafficLight.YellowLED.active_state = LED_PIN_HIGH;
    
    // Configure Green LED on PB2
    MyTrafficLight.GreenLED.port = LED_PORTB;
    MyTrafficLight.GreenLED.pin = LED_PIN2;
    MyTrafficLight.GreenLED.active_state = LED_PIN_HIGH;
    
    // Initialize Traffic Light System
    TRAFFIC_LIGHT_VoidInit(&MyTrafficLight);
    
    // Main Loop - Run Traffic Light System
    while(1) {
        TRAFFIC_LIGHT_VoidRun(&MyTrafficLight);
    }
    
    return 0;
}