
//SCRIPT SECTION
#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
}
void loop() {
// this is generally not necessary but with some older systems it seems to
// prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);
  
// Type out this string letter by letter on the computer (assumes US-style
// keyboard)
//--------------------------------------------------//
// (AVOID modifying anything above here)

//Script
// Connection Delay
  DigiKeyboard.delay(1000);

// "21" is used here to reference the R key
  DigiKeyboard.sendKeyStroke(21, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);

// Open powershell as Administrator  
  DigiKeyboard.print("PowerShell -Exec Bypass");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeySrtoke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(3000);
// "28" is refferencing the Y key, ALT + Y will answer yes to the UAC prompt
  DigiKeyboard.sendKeyStroke(28, MOD_ALT_LEFT);
  DigiKeyboard.delay(4000);

  DigiKeyboard.print("SOME POWERSHELL CODE HERE");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

//Super Long Delay (i.e No Repeat...)

  DigiKeyboard.delay(1000000);

}
//make sure there is a } symbol above this line to close the script.


//- - - - -BEFORE FLASHING- - - - -

//Download Digispark drivers from the link below.
//https://github.com/digistump/DigistumpArduino/releases/download/1.6.7/Digistump.Drivers.zip
//install nesececery drivers, click on "DPinst64.exe" 
//in Arduino click File > Preferences and in 'additional board manager URL' put the following link..
//https://raw.githubusercontent.com/digistump/arduino-boards-index/master/package_digistump_index.json
//Click OK
//Then, in Arduino click Tools > Board > Boards Manager..
//search bar for 'DigiStump AVR Boards' and install it
//then click Tools > Board > DigiStump AVR Boards > Digispark (Default - 16.5mhz)
//NOW YOU ARE READY TO FLASH YOUR SCRIPT

//- - - - - -FLASHING NEW SCRIPT - - - - - 

//***DON'T PLUG IN YET****

//Once the above "SCRIPT SECTION" is modified how you want click the tick in the top left.
//the output in black below should say something like...(in white text)
//
//Sketch uses 2790 bytes (46%) of program storage space. Maximum is 6012 bytes.
//Global variables use 118 bytes of dynamic memory.
//
//If so click the right arrow next to the tick. (with the USB unplugged)
//then it will say
//Running Digispark Uploader...
//Plug in device now... (will timeout in 60 seconds)

//PLUG IN NOW AND WAIT 10secs, once done he will reconnect and begin his job..
//DigiSpark runs on a loop so it's wise to add a large delay at the end of any script so it wont loop
//It will now run commands on loop when plugged in to anything except for..
//when you plug in to arduino like we did earlier.

// - - - - EXAMPLES - - - - -

//  use at least (100) delay inbeetween each instruction to be safe
//  each line must close with ;
//  delay units are in milliseconds - (1000) = 1 second!


//  DigiKeyboard.delay Is used to add a pause before moving on (even small ones needed for some computers to keep up!)
//  DigiKeyboard.delay(200);

//  DigiKeyboard.sendKeyStroke Presses 1,2 or 3 keys together (with 3 keys they must me seperated with comma then pipe symbol, and 2 keys is just a comma)
//  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT); (('GUI' means the windows key))
//  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT, KEY_ENTER);
//  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);

//  DigiKeyboard.print Prints a line of text (like typing) - USE brackets and quotes ("")
//  DigiKeyboard.print("type what ever string of text you like here like");


// - - - - - GLOSSARY - - - - -

//#define MOD_CONTROL_LEFT    (1<<0)
//#define MOD_SHIFT_LEFT      (1<<1)
//#define MOD_ALT_LEFT        (1<<2)
//#define MOD_GUI_LEFT        (1<<3)
//#define MOD_CONTROL_RIGHT   (1<<4)
//#define MOD_SHIFT_RIGHT     (1<<5)
//#define MOD_ALT_RIGHT       (1<<6)
//#define MOD_GUI_RIGHT       (1<<7)
//#define KEY_A       4
//#define KEY_B       5
//#define KEY_C       6
//#define KEY_D       7
//#define KEY_E       8
//#define KEY_F       9
//#define KEY_G       10
//#define KEY_H       11
//#define KEY_I       12
//#define KEY_J       13
//#define KEY_K       14
//#define KEY_L       15
//#define KEY_M       16
//#define KEY_N       17
//#define KEY_O       18
//#define KEY_P       19
//#define KEY_Q       20
//#define KEY_R       21
//#define KEY_S       22
//#define KEY_T       23
//#define KEY_U       24
//#define KEY_V       25
//#define KEY_W       26
//#define KEY_X       27
//#define KEY_Y       28
//#define KEY_Z       29
//#define KEY_1       30
//#define KEY_2       31
//#define KEY_3       32
//#define KEY_4       33
//#define KEY_5       34
//#define KEY_6       35
//#define KEY_7       36
//#define KEY_8       37
//#define KEY_9       38
//#define KEY_0       39
//#define KEY_ENTER   40
//#define KEY_SPACE   44
//#define KEY_F1      58
//#define KEY_F2      59
//#define KEY_F3      60
//#define KEY_F4      61
//#define KEY_F5      62
//#define KEY_F6      63
//#define KEY_F7      64
//#define KEY_F8      65
//#define KEY_F9      66
//#define KEY_F10     67
//#define KEY_F11     68
//#define KEY_F12     69
//#define KEY_ARROW_LEFT 0x50
