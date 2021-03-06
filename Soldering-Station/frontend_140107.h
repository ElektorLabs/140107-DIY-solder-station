#ifndef FRONTEND_140107_H_
 #define FRONTEND_140107_H_ 
 
 #include "Arduino.h"
 #include "enums.h"
 #include "Frontend.h"




#define _BACKLIGHT_ ( 19 )


class FE_140107 : public SolderingStation_FE {
    
public: 
    FE_140107(){}
    void display_setup( void );
    void display_welcome_logo( void );
    void display_title( void );
    void display_invert( bool invert );
    void display_dim(bool dim );
    void display_show_Temperatur(  uint16_t dispTemperature, uint8_t HeatPwr_Percent, uint16_t setpoint, fsmstate_t state, uint16_t timestamp );
    void display_show_TempError( uint8_t ErrNo );
    void display_show_sleep( uint16_t timestamp );
};
#endif
