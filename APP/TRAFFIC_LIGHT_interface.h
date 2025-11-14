/*  
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<     TRAFFIC_LIGHT_interface.h    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
   author : Aysha Shaban Galal
   Layer  : APP 
   SWC    : TRAFFIC_LIGHT
*/
#ifndef _TRAFFIC_LIGHT_INTERFACE_H_
#define _TRAFFIC_LIGHT_INTERFACE_H_

// Traffic Light Timing (in seconds)
#define GREEN_TIME   5
#define YELLOW_TIME  2
#define RED_TIME     5

// Traffic Light States
typedef enum {
    GREEN_STATE,
    YELLOW_STATE,
    RED_STATE
} TrafficState;

// Traffic Light System Structure
typedef struct {
    LED_TYPE RedLED;
    LED_TYPE YellowLED;
    LED_TYPE GreenLED;
    TrafficState CurrentState;
} TrafficLight_TYPE;

void TRAFFIC_LIGHT_VoidInit(TrafficLight_TYPE* traffic);
void TRAFFIC_LIGHT_VoidRun(TrafficLight_TYPE* traffic);
void TRAFFIC_LIGHT_VoidChangeState(TrafficLight_TYPE* traffic, TrafficState newState);

#endif
