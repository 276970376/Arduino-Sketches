#include <SPI.h>
#include <Gamebuino.h>
Gamebuino gb;

const uint8_t gamebuinoLogo[] PROGMEM =
{
	84,10, //width and height
	B00000011, B11100001, B10000001, B10000110, B01111111, B00111110, B00011000, B01101101, B10000011, B00001111, B00001111, 
	B00001110, B00000001, B10000011, B10000110, B01100000, B00110011, B00011000, B01101101, B11000011, B00011001, B10001111, 
	B00011000, B00000011, B11000011, B10001110, B01100000, B00110011, B00011000, B01101101, B11100011, B00110000, B11001111, 
	B00011000, B00000011, B11000011, B10011110, B01100000, B00110110, B00110000, B11001101, B11100011, B01100000, B11001111, 
	B00110000, B00000110, B11000111, B10011110, B01111110, B00111110, B00110000, B11001101, B10110011, B01100000, B11001111, 
	B00110000, B00001100, B11000110, B11110110, B01100000, B00110011, B00110000, B11011001, B10110110, B01100000, B11001111, 
	B00110011, B11001111, B11001100, B11110110, B01100000, B01100001, B10110000, B11011011, B00011110, B01100000, B11001111, 
	B00110000, B11011000, B01101100, B11100110, B11000000, B01100001, B10110000, B11011011, B00011110, B01100001, B10001111, 
	B00011001, B10011000, B01101100, B11000110, B11000000, B01100011, B10110001, B10011011, B00001110, B00110011, B00001111, 
	B00001111, B10110000, B01111000, B11000110, B11111111, B01111110, B00011111, B00011011, B00000110, B00011110, B00001111, 
};

void setup(){
  gb.begin();
  gb.titleScreen(F("Gamebuino logo"));
  gb.battery.show = false;
  gb.backlight.set(255);
}

void loop(){
  if(gb.update()){
    
    gb.display.drawBitmap(0,12,gamebuinoLogo);
    

    if(gb.buttons.pressed(BTN_C)){
      gb.titleScreen(F("Gamebuino logo"));
    }
  }
}


