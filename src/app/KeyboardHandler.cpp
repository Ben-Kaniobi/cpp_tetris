/*
 * KeyboardHandler.cpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#include "Libraries.hpp"
#include "KeyboardHandler.hpp"

/* Global static pointer used to ensure a single instance of the class */
KeyboardHandler* KeyboardHandler::theKeyboardHandler = 0;

KeyboardHandler* KeyboardHandler::getInstance() {
	/* Generate the single object on first call */
	if (!theKeyboardHandler) {
		theKeyboardHandler = new KeyboardHandler;
	}
	/* Return the single object */
	return theKeyboardHandler;
}

void KeyboardHandler::start() {
	//TODO
}

void KeyboardHandler::stop() {
	//TODO
}

void KeyboardHandler::updateGame() {
//	int Key = 0;
//	if(IsKeyPressReady()) {
//		Key = GetKeyPress();
//		if (Key == W_KEY_CURSOR_UP) {
//			/* Rotate current tetromino */
//			DrawTextXY(10, 32, ColBlack,   "Rotate");
//		}
//		if (Key == W_KEY_CURSOR_DOWN) {
//			/* Rotate current tetromino */
//			DrawTextXY(10, 52, ColBlack,   "Down");
//		}
//		if (Key == W_KEY_CURSOR_LEFT) {
//			/* Rotate current tetromino */
//			DrawTextXY(10, 72, ColBlack,   "Left");
//		}
//		if (Key == W_KEY_CURSOR_RIGHT) {
//			/* Rotate current tetromino */
//			DrawTextXY(10, 92, ColBlack,   "Right");
//		}
//	}
}
