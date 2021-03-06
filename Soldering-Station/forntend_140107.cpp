#include "frontend_140107.h"
#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);



void FE_140107::display_setup( void ){
  pinMode( _BACKLIGHT_ ,OUTPUT);                 // Set rotary button as input and enable pullup
  digitalWrite( _BACKLIGHT_, HIGH);
   
  lcd.begin(16,2);
  lcd.clear();
   
}

void FE_140107::display_welcome_logo( void ) {
   lcd.clear();
   lcd.setCursor(0,0);
   lcd.print("   ELEKTOR(C)   ");
   lcd.setCursor(0,1);
   lcd.print(" PLATINO SERIES "); 
}

void FE_140107::display_title( void ){

   lcd.clear();
   lcd.setCursor(0,0);
   lcd.print(" SOLDER STATION ");
   lcd.setCursor(0,1);
   lcd.print("2.0 - WELLER TIP"); 

}

void FE_140107::display_invert( bool invert ) {

    if(invert==true){
      digitalWrite( _BACKLIGHT_, LOW);
    } else {
      digitalWrite( _BACKLIGHT_, HIGH);
    }

}

void FE_140107::display_dim(bool dim ){

   /* Not supported */
    
}

void FE_140107::display_show_Temperatur(uint16_t dispTemperature, uint8_t HeatPwr_Percent, uint16_t setpoint, fsmstate_t state, uint16_t timestamp ){
    
   static uint16_t last_timestamp;
   lcd.setCursor(0,0);
   lcd.print(" Setup Temp:    ");
   if( (last_timestamp != timestamp) && ( state == POWERSAVE_WAIT) && (timestamp&0x0001!=0) ){
      last_timestamp=timestamp;
      /* Show nothing */
   } else {
      lcd.setCursor(13,0);
      lcd.print(setpoint);
   }
      
   lcd.setCursor(0,1);
   lcd.print("Actual Temp: "); 
   lcd.setCursor(13,1);
   lcd.print(dispTemperature);
   if(dispTemperature<100){
    lcd.setCursor(15,1);
    lcd.print(" ");
   }

   
}

void FE_140107::display_show_TempError(uint8_t ErrNo){

   lcd.setCursor(0,0);
   lcd.print("Temperatur Fault");
   lcd.setCursor(0,1);
   lcd.print(" E              "); 
   lcd.setCursor(2,1);
   lcd.print(ErrNo);
}


void FE_140107::display_show_sleep( uint16_t timestamp){
     
   lcd.setCursor(0,0);
   lcd.print("   Station in    ");
   lcd.setCursor(0,1);
   lcd.print("   Sleepmode     ");   
 
}
