/*
 * GameHandler.cpp
 *
 *  Created on: 28.04.2014
 *      Author: kasen1
 */

#include "Libraries.hpp"
#include "GameHandler.hpp"
#include "Updater.hpp"
#include "TetrominoI.hpp"
#include "TetrominoO.hpp"
#include "TetrominoT.hpp"
#include "TetrominoJ.hpp"
#include "TetrominoL.hpp"
#include "TetrominoS.hpp"
#include "TetrominoZ.hpp"

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
	ClearWindow();

	/* Display "Game Over", factor 3.2 is used for centering and depends on the string width */
	SelectFont("Arial", FONT_SIZE_GAME_OVER, FONT_NORMAL);
	DrawTextXY((WIN_WIDTH)/2 - FONT_SIZE_GAME_OVER*3.2, (WIN_HEIGHT-FONT_SIZE)/2, ColRed, "Game Over");
	GameHandler::stop();
}

void GameHandler::stop() {
	/* Stop the updater */
	Updater::getInstance()->stop();
	/* Close the graphic window, cleanup and return */
	CloseGraphic();
	running = false;
}


extern "C" int gfxmain(int argc, char* argv[], const char *ApplicationPath) {
	/* Start updater */
	Updater::getInstance()->start();

	/* Start graphics */
	InitGraphic(WIN_WIDTH, WIN_HEIGHT);
	ClearWindow();

	/* Variable to update between ticks */
	bool instantUpdate;

	Tetromino *pTheTetromino = new TetrominoI();

	while(GameHandler::getInstance()->isRunning()) {
		instantUpdate = false;

		/* Handle keyboard events */
		int Key = 0;
		if(IsKeyPressReady()) {
			Key = GetKeyPress();
			switch(Key) {
			case W_KEY_F1:
				/* Rotate current tetromino counter clock wise */
				pTheTetromino->rotate(true);
				instantUpdate = true;
				break;

			case W_KEY_F2:
				/* Rotate current tetromino clock wise */
				pTheTetromino->rotate(false);
				instantUpdate = true;
				break;

			case W_KEY_CURSOR_DOWN:
				/* Move current tetromino down */
				pTheTetromino->move(DirDown);
				instantUpdate = true;
				break;

			case W_KEY_CURSOR_LEFT:
				/* Move current tetromino left */
				pTheTetromino->move(DirLeft);
				instantUpdate = true;
				break;

			case W_KEY_CURSOR_RIGHT:
				/* Move current tetromino right */
				pTheTetromino->move(DirRight);
				instantUpdate = true;
				break;

			case W_KEY_ESCAPE: /* Fall through */
			case W_KEY_CLOSE_WINDOW:
				GameHandler::getInstance()->stop();
				break;

			default:
				/* Ignore other key events */
				break;
			}
		}

		/* Update game if neccessary */
		Updater::getInstance()->updateGame(static_cast<Tetromino*>(pTheTetromino), instantUpdate);
	}

	delete pTheTetromino;
	return EXIT_SUCCESS;
}
