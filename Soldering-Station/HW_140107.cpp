#include "HW_140107.h"

void HW_140107::Setup( void* cb_1ms_Timer ){
    Serial.begin(115200);
    Frontend.display_setup();
    pinMode( ROTARY_BTN ,INPUT_PULLUP);              // Set rotary button as input and enable pullup
    pinMode( ROTARY_TERM_A ,INPUT_PULLUP);              // Set rotary button as input and enable pullup
    pinMode( ROTARY_TERM_B ,INPUT_PULLUP);              // Set rotary button as input and enable pullup
    
    /* this needs to be adjusted !*/
    Timer1.initialize(1000);                         //1ms interrupts from the timer
    Timer1.attachInterrupt(cb_1ms_Timer);            //Attatch the function to the isr callback
    Timer1.pwm( PWM_PIN ,0);
}

fsmstate_t HW_140107::CheckLimits(){
  fsmstate_t RetVal=NOFAULT;
  return RetVal;
}

void  HW_140107::AdjustCurrent(uint16_t PWM_Value){
   PWM.On(PWM_Value);
}




