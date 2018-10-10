#ifndef HW_140107_H_
 #define HW_140107_H_

#define _PLATFORM_HW_140107_
#include <TimerOne.h>
#include "enums.h"
 /* This is for 140107 */
#include "frontend_140107.h"
#include "PWM_140107.h"
#include "TEMP_140107.h"
#include "CURRENT_140107.h"


#define ROTARY_TERM_A ( 9 )
#define ROTARY_TERM_B ( 8 )
#define ROTARY_BTN ( 16 )
/* This HW has no BTN avalible on the rotary switch */
/* This will be evaluated by a bit of software and a reading takes some moments */

/* ROTARY_CW_LEVEL can be HIGH or LOW */
#define ROTARY_CW_LEVEL ( HIGH ) 

#define MAX_PWM        512
#define MAX_PWM_LIMIT  500

#define ADC_AVG        4

class HW_140107 {
    public:
        HW_140107(){};
        fsmstate_t CheckLimits( void );
        void  AdjustCurrent(uint16_t PWM_Value);
        void ShowUndervoltage(){ };
        void Setup( void* cb_1ms_Timer );
        FE_140107 Frontend;
        PWM_140107 PWM;
        TEMP_140107 Temp;
        
    private:
      
};


#endif
