
#include <HIDKeyboard.h> //Libreria
HIDKeyboard keyboard;    // Initialize HIDkeyboard object

// Todo el código debe ejecutarse en el setup()
// Si se ejecuta en loop(), se ejecutará de forma indefinida

void setup()
{
  // Inicializamos el objeto keyboard
  keyboard.begin();
  delay(2000);
  // Equivalencia código HIDKeyboard y RUBBER DUCKY
  keyboard.pressSpecialKey(GUI);   // GUI r
  keyboard.releaseKey();
  delay(1000);                     // DELAY 1000
  keyboard.println("notepad.exe"); // STRING notepad.exe + ENTER
  delay(1000)                      // DELAY 1000
  keyboard.println("Hello World!!"); // STRING Hello World!
  
}

// Unused
void loop() {}