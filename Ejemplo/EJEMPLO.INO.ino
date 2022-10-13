#include <HIDKeyboard.h>

HIDKeyboard keyboard; // Initialize HIDkeyboard object

void setup()
{
  keyboard.begin();
  delay(2000);

  keyboard.pressSpecialKey(GUI);
  keyboard.releaseKey();
  delay(200);
  keyboard.println("run");
  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();
  delay(1000);

}

// Unused
void loop() {}
