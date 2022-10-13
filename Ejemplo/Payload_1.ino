#include <HIDKeyboard.h> //Libreria
HIDKeyboard keyboard;    // Initialize HIDkeyboard object

// Todo el código debe ejecutarse en el setup()
// Si se ejecuta en loop(), se ejecutará de forma indefinida

void setup()
{
  // Inicializamos el objeto keyboard
  keyboard.begin();
  delay(2000);
  
  // Código que abre una consola de comandos en Windows
  keyboard.pressSpecialKey(GUI);
  keyboard.releaseKey();
  delay(500);
  keyboard.print("cmd");
  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();
  delay(1000);

}

// Unused
void loop() {}
