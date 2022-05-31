
#include "DigiKeyboard.h"

void openchrome(String URL){
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("chrome.exe " + URL);
}

void setup() {


}

void loop() {
  openchrome("https://www.youtube.com/watch?v=rjjwGtJAhIs");

}
