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
GameHandler* GameHandler::TheGameHandler = 0;

GameHandler* GameHandler::getInstance() {
	/* Generate the single object on first call */
	if (!TheGameHandler) {
		TheGameHandler = new GameHandler;
	}
	/* Return the single object */
	return TheGameHandler;
}

void GameHandler::testingMethod() {
	ColorType Col;
	Col.Red   = 0;
	Col.Green = 0xff;
	Col.Blue  = 0;
	Col.Alpha = 0xff;
	DrawFilledRectangle(90, 90, 40, 40, Col, 1);
}





extern "C" int gfxmain(int argc, char* argv[], const char *ApplicationPath) {
	int Key = 0;
	InitGraphic(600, 400);
	GameHandler::getInstance()->testingMethod();

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
