/*
 * GameHandler.cpp
 *
 *  Created on: 28.04.2014
 *      Author: kasen1
 */

#include "Libraries.hpp"
#include "GameHandler.hpp"
#include "Updater.hpp"

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

void onClose() {
	/* Stop the updater */
	Updater::getInstance()->stop();
	/* Close the graphic window, cleanup and return */
	CloseGraphic();
}

extern "C" int gfxmain(int argc, char* argv[], const char *ApplicationPath) {
	/* Start updater */
	Updater::getInstance()->start();

	/* Start graphics */
	InitGraphic(WIN_WIDTH, WIN_HEIGHT);
	ClearWindow();
	SelectFont("Arial", 12, FONT_NORMAL);


	while(FOREVER) {
		/* Handle keyboard events */
		int Key = 0;
		if(IsKeyPressReady()) {
			Key = GetKeyPress();
			switch(Key) {
			case W_KEY_CURSOR_UP:
				/* Rotate current tetromino */
				DrawTextXY(10, 32, ColBlack,   "Rotate");
				break;

			case W_KEY_CURSOR_DOWN:
				/* Rotate current tetromino */
				DrawTextXY(10, 52, ColBlack,   "Down");
				break;

			case W_KEY_CURSOR_LEFT:
				/* Rotate current tetromino */
				DrawTextXY(10, 72, ColBlack,   "Left");
				break;

			case W_KEY_CURSOR_RIGHT:
				/* Rotate current tetromino */
				DrawTextXY(10, 92, ColBlack,   "Right");
				break;

			case W_KEY_ESCAPE: /* Fall through */
			case W_KEY_CLOSE_WINDOW:
				onClose();
				return EXIT_SUCCESS;

			default:
				/* Ignore other key events */
				break;
			}
		}

		/* Update game if neccessary */
		Updater::getInstance()->updateGame();
	}

	return EXIT_SUCCESS;
}
