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
	InitGraphic(600, 400);
	//GameHandler::getInstance()->testingMethod();

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
