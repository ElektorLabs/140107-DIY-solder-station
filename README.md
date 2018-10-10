#  140107 - Soldering station
Software for the soldering station ( 140107 ) based on the arduino framwork.

Shows the Temperature in °C 

## Getting Started

Before using the new software a 1M Ohm resistor between VCC( 5V ) and the temperatur sende input is requiered. 
This will prevent unwanted destruction of the weller tips if the cable has a fault. Also the software can recognize 
the bad connetion now and shutdown the heating. 

Download the source and open it with the arduino ide ( >= 1.8.x ) and select Arduino Uno as target.
Setup the serial port you are useing for the station.
Be aware that after flashing the new software, your current temperature settings may be gone and set back to 50°C


### Prerequisites

You need TimerOne library installed in your libs path.

### Warning

As the sotware uses the arduino frameowrk and the platino is a arduino uno device make sure you set the fuses on you mcu to use a 16Mhz external crystal. 
Install the arduino bootloader on the chip, if not already done, and flash the new software using the bootloader. If you are using an external programmer
be aware that the origonal software was running on the internal 8Mhz and fuses need to be set accordingly. Fuses shall be:

efuse: 0xFD
hfuse: 0xDE
lfuse: 0xFF

Also not that the use of a rotaty encoder with pushbutton is mandatory.

