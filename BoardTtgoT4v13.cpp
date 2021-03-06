#include "BoardInterface.h"
#include "Board320_240.h"
#include "BoardTtgoT4v13.h"

/**
  Init board
*/
void BoardTtgoT4v13::initBoard() {

  pinButtonLeft = BUTTON_LEFT;
  pinButtonRight = BUTTON_RIGHT;
  pinButtonMiddle = BUTTON_MIDDLE;
  //pinSpeaker = SPEAKER_PIN;
  pinBrightness = TFT_BL;
  pinSdcardCs = SDCARD_CS;
  pinSdcardMosi = SDCARD_MOSI;
  pinSdcardMiso = SDCARD_MISO;
  pinSdcardSclk = SDCARD_SCLK;

  Board320_240::initBoard();
}
