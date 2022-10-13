#include <HIDKeyboard.h>

HIDKeyboard keyboard;


/* Init function */
void setup()
{
  // Begining the Keyboard stream
  keyboard.begin();

  // Wait 500ms
  delay(500);

  keyboard.press(KEY_LEFT_GUI);
  keyboard.press('r');
  keyboard.releaseAll();

  delay(50);
  keyboard.print(F("notepad.exe"));

  typeKey(KEY_RETURN);

  delay(100);
  keyboard.print(F("Hello World"));

  keyboard.press(KEY_LEFT_ALT);
  keyboard.press('f');
  keyboard.releaseAll();

  keyboard.print(F("s"));

  // alt-f pulls up the File menu and s saves. This two keystroke combo is why ALT is jealous of CONTROL's leetness and CTRL+S
  // Ending stream
  keyboard.end();
}

void typeKey(uint8_t key)
{
  keyboard.press(key);
  delay(50);
  keyboard.release(key);
}
/* Unused endless loop */
void loop() {}

