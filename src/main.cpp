
#include "M5Cardputer.h"

void setup() {

    //Most of the built-in peripherals are initialized with M5Dial.begin().
    M5Cardputer.begin();
    //Set font color
    M5Cardputer.Display.setTextColor(GREEN);
    //Set the font to its mode
    M5Cardputer.Display.setTextDatum(middle_center);
    //set font
    M5Cardputer.Display.setTextFont(&fonts::Orbitron_Light_32);
    //font-size
    M5Cardputer.Display.setTextSize(0.5);

    M5Cardputer.Display.clearDisplay();
    //Print Text File
    M5Cardputer.Display.drawString("Setup", M5Cardputer.Display.width() / 2,
                                   M5Cardputer.Display.height() / 2);
}

void loop() {
    M5Cardputer.update();
    if (M5Cardputer.Keyboard.isChange()) {
        if (M5Cardputer.Keyboard.isKeyPressed(KEY_TAB)) {
            M5Cardputer.Display.clearDisplay();
            M5Cardputer.Display.setTextSize(0.5);
            M5Cardputer.Display.drawString("Hello World", M5Cardputer.Display.width() / 2,
                                           M5Cardputer.Display.height() / 2);
        }
    }
}
