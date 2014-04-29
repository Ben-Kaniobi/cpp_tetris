/*
 * GameHandler.cpp
 *
 *  Created on: 28.04.2014
 *      Author: kasen1
 */

#include "Libraries.hpp"
#include "GameHandler.hpp"
#include "KeyboardHandler.hpp"

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
	InitGraphic(WIN_WIDTH, WIN_HEIGHT);

	int px = 16;
	SelectFont("Arial", px-4, FONT_NORMAL);
	DrawTextXY(10, 1*px, ColBlack,   "Testing...");

	while(FOREVER) {
//		KeyboardHandler::getInstance()->updateGame();


		int Key = 0;
		if(IsKeyPressReady()) {
			Key = GetKeyPress();
			if (Key == W_KEY_CLOSE_WINDOW || Key == W_KEY_ESCAPE) {
				/* Close the graphic window, cleanup and return */
				CloseGraphic();
				return EXIT_SUCCESS;
			}
			if (Key == W_KEY_CURSOR_UP) {
				/* Rotate current tetromino */
				DrawTextXY(10, 32, ColBlack,   "Rotate");
			}
			if (Key == W_KEY_CURSOR_DOWN) {
				/* Rotate current tetromino */
				DrawTextXY(10, 52, ColBlack,   "Down");
			}
			if (Key == W_KEY_CURSOR_LEFT) {
				/* Rotate current tetromino */
				DrawTextXY(10, 72, ColBlack,   "Left");
			}
			if (Key == W_KEY_CURSOR_RIGHT) {
				/* Rotate current tetromino */
				DrawTextXY(10, 92, ColBlack,   "Right");
			}
		}

//		/* Check if window was closed */
//		if(IsKeyPressReady() && (GetKeyPress() == W_KEY_CLOSE_WINDOW)) {
//			/* Close the graphic window, cleanup and return */
//			CloseGraphic();
//			return EXIT_SUCCESS;
//		}
	}

	return EXIT_SUCCESS;
}
