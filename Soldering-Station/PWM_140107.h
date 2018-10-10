#ifndef PWM_140107_H_
 #define PWM_140107_H_

 
 
 #include "Arduino.h"
 #include "enums.h"
 #include "pwm_hal.h"

 #define PWM_PIN ( 10 )
 
/**********************************************************************************************************
                               CLASS PWM_140107 
**********************************************************************************************************
 Baseclass:   SolderingStation_PWM
 Function:    Derrived class for 140107 PWM
 Input:       None
 Output:      None
 Discription: Handels the PWM of 140107
**********************************************************************************************************/
 class PWM_140107 : public SolderingStation_PWM {
        public:
        PWM_140107( void ){ };
        void On( uint16_t value );
        void Off( void );
        uint16_t ReadPWMValue( void );
        
    };

#endif
