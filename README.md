# DigiSpark-BadUSB
This is a quick tutorial for setting up a Digispark Bad USB.

// ***- - - - SETUP - - - - -***

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

//***- - - - - -FLASHING NEW SCRIPT - - - - -***

//DON'T PLUG IN YET

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

// ***- - - - EXAMPLES - - - - -***

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
