/******************************************************************************/
/*! \file GameHandler.cpp
 ******************************************************************************
 *  \author    kasen1
 *  \author    plats1
 *
 *  \version   0.1.0
 *
 *  \date      2014-04-28  v0.0.1  File created
 *  \date      2014-06-11  v0.1.0  Implemented all but class map and class line
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
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

GameHandler::~GameHandler() {
	/* Stop the game */
	this->stop();
	/* Delete the single object */
	delete theGameHandler;
}

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

/* Main function (not part of the GameHandler class) */
extern "C" int gfxmain(int argc, char* argv[], const char *ApplicationPath) {
	/* Init random seed with current time */
	srand(time(NULL));

	/* Start updater */
	Updater::getInstance()->start();

	/* Start graphics */
	InitGraphic(WIN_WIDTH, WIN_HEIGHT);
	ClearWindow();

	/* Variable to update between ticks */
	bool instantUpdate;

	/* Create tetromino with random number in range 0 to 6 */
	Tetromino *pTheTetromino;
	switch(rand() % 7) {
	case 0: pTheTetromino = new TetrominoI(); break;
	case 1: pTheTetromino = new TetrominoO(); break;
	case 2: pTheTetromino = new TetrominoT(); break;
	case 3: pTheTetromino = new TetrominoJ(); break;
	case 4: pTheTetromino = new TetrominoL(); break;
	case 5: pTheTetromino = new TetrominoS(); break;
	case 6: pTheTetromino = new TetrominoZ(); break;
	default: /* Not possible */ break;
	}

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

			case W_KEY_CURSOR_UP:
				// TODO: This mode/key is just for testing
				if(pTheTetromino->getType() == typeTetrominoO) {
					delete pTheTetromino;
					pTheTetromino = new TetrominoI();
				}
				else if(pTheTetromino->getType() == typeTetrominoI) {
					delete pTheTetromino;
					pTheTetromino = new TetrominoT();
				}
				else if(pTheTetromino->getType() == typeTetrominoT) {
					delete pTheTetromino;
					pTheTetromino = new TetrominoJ();
				}
				else if(pTheTetromino->getType() == typeTetrominoJ) {
					delete pTheTetromino;
					pTheTetromino = new TetrominoL();
				}
				else if(pTheTetromino->getType() == typeTetrominoL) {
					delete pTheTetromino;
					pTheTetromino = new TetrominoS();
				}
				else if(pTheTetromino->getType() == typeTetrominoS) {
					delete pTheTetromino;
					pTheTetromino = new TetrominoZ();
				}
				else {
					delete pTheTetromino;
					pTheTetromino = new TetrominoO();
				}
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

	std::cout << "EXIT_SUCCESS" << std::endl;
	return EXIT_SUCCESS;
}
