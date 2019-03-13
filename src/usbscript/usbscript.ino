#include "DigiKeyboard.h"
  
void setup() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(250);
  DigiKeyboard.write(" chrome.exe https://outlook.office.com/owa/?realm=u.nus.edu news.google.com");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}


void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(5000);
}
