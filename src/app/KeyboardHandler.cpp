/*
 * KeyboardHandler.cpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

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
	//TODO
}
