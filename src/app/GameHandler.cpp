/*
 * GameHandler.cpp
 *
 *  Created on: 28.04.2014
 *      Author: kasen1
 */

#include "Libraries.hpp"
#include "GameHandler.hpp"
//#include "Block.hpp"

#define FOREVER      1
#define EXIT_SUCCESS 0

/* Global static pointer used to ensure a single instance of the class */
GameHandler* GameHandler::theGameHandler = 0;

GameHandler* GameHandler::getInstance() {
	/* Generate the single object on first call */
	if (!theGameHandler) {
		theGameHandler = new GameHandler;
	}
	/* Return the single object */
	return theGameHandler;
}

void GameHandler::gameOver() {
	//TODO
}

extern "C" int gfxmain(int argc, char* argv[], const char *ApplicationPath) {
	int Key = 0;
	InitGraphic(600, 400);
	//GameHandler::getInstance()->testingMethod();

//	ColorType ColBlack;
//	ColBlack.Red   = 0;
//	ColBlack.Green = 0;
//	ColBlack.Blue  = 0;
//	ColBlack.Alpha = 0xff;
//
//	Block theBlock("bla");
//
//	SelectFont("Arial", 12, FONT_NORMAL);
//	DrawTextXY (10, 22, ColBlack, "i: " + theBlock.geti());

	while(FOREVER) {
		if(IsKeyPressReady()) {
			Key = GetKeyPress();
			if (Key == W_KEY_CLOSE_WINDOW) {
				/* Close the graphic window, cleanup and return */
				CloseGraphic();
				return EXIT_SUCCESS;
			}
		}
	}

	return EXIT_SUCCESS;
}
