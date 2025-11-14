/*  
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<     TRAFFIC_LIGHT_program.c    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
   author : Aysha Shaban Galal
   Layer  : APP 
   SWC    : TRAFFIC_LIGHT
*/
#include "STD_TYPES.h"
#include "LED_interface.h"
#include "DELAY_interface.h"
#include "TRAFFIC_LIGHT_interface.h"

void TRAFFIC_LIGHT_VoidInit(TrafficLight_TYPE* traffic) {
    // Initialize all LEDs
    LED_VoidInit(traffic->RedLED);
    LED_VoidInit(traffic->YellowLED);
    LED_VoidInit(traffic->GreenLED);
    
    // Turn off all LEDs initially
    LED_VoidOff(traffic->RedLED);
    LED_VoidOff(traffic->YellowLED);
    LED_VoidOff(traffic->GreenLED);
    
    // Set initial state to GREEN
    traffic->CurrentState = GREEN_STATE;
}

void TRAFFIC_LIGHT_VoidChangeState(TrafficLight_TYPE* traffic, TrafficState newState) {
    // Turn off all LEDs first
    LED_VoidOff(traffic->RedLED);
    LED_VoidOff(traffic->YellowLED);
    LED_VoidOff(traffic->GreenLED);
    
    // Turn on the appropriate LED based on new state
    switch(newState) {
        case GREEN_STATE:
            LED_VoidOn(traffic->GreenLED);
            break;
            
        case YELLOW_STATE:
            LED_VoidOn(traffic->YellowLED);
            break;
            
        case RED_STATE:
            LED_VoidOn(traffic->RedLED);
            break;
    }
    
    // Update current state
    traffic->CurrentState = newState;
}

void TRAFFIC_LIGHT_VoidRun(TrafficLight_TYPE* traffic) {
    switch(traffic->CurrentState) {
        case GREEN_STATE:
            // Green light for 5 seconds
            TRAFFIC_LIGHT_VoidChangeState(traffic, GREEN_STATE);
            DELAY_VoidSec(GREEN_TIME);
            traffic->CurrentState = YELLOW_STATE;
            break;
            
        case YELLOW_STATE:
            // Yellow light for 2 seconds
            TRAFFIC_LIGHT_VoidChangeState(traffic, YELLOW_STATE);
            DELAY_VoidSec(YELLOW_TIME);
            traffic->CurrentState = RED_STATE;
            break;
            
        case RED_STATE:
            // Red light for 5 seconds
            TRAFFIC_LIGHT_VoidChangeState(traffic, RED_STATE);
            DELAY_VoidSec(RED_TIME);
            traffic->CurrentState = GREEN_STATE;
            break;
            
        default:
            traffic->CurrentState = GREEN_STATE;
            break;
    }
}
