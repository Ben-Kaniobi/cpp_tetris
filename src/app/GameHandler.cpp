/*
 * GameHandler.cpp
 *
 *  Created on: 28.04.2014
 *      Author: kasen1
 */

#include "Libraries.hpp"
#include "GameHandler.hpp"

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
	InitGraphic(WIN_WIDTH, WIN_HEIGHT);
	//GameHandler::getInstance()->testingMethod();

	int px = 16;
	SelectFont("Arial", px-4, FONT_NORMAL);
	DrawTextXY(10, 1*px, ColBlack,   "Testing...");

	DrawTextXY(10, 2*px, ColOrange,  " Orange");
	DrawTextXY(10, 3*px, ColCyan,    " Cyan");
	DrawTextXY(10, 4*px, ColRed,     " Red");
	DrawTextXY(10, 5*px, ColYellow,  " Yellow");
	DrawTextXY(10, 6*px, ColMagenta, " Magenta");
	DrawTextXY(10, 7*px, ColGreen,   " Green");
	DrawTextXY(10, 8*px, ColBlue,    " Blue");

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
