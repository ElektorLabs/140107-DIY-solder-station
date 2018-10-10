#include "TEMP_140107.h"

uint16_t TEMP_140107::Read( uint8_t avg_cnt){
    
    uint16_t temperature=999;
    uint16_t samples=0;
    uint16_t ADCvoltage =0;  
    for(uint8_t i =0;i< avg_cnt;i++)
    {
      samples += analogRead(A0);
    } 
    samples = samples / avg_cnt;
    samples = samples * 42;
    samples = samples / 100;
    temperature = samples + 30;    //conversion of ADC value to temperature

   if(temperature>=458){
    temperature=999;
   }
   
   LastReadTemp=temperature;
   return temperature;
}

uint16_t TEMP_140107::GetLastValue( void ){
    return LastReadTemp;
}
