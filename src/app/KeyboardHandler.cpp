/*
 * KeyboardHandler.cpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#include "KeyboardHandler.hpp"

/* Global static pointer used to ensure a single instance of the class */
KeyboardHandler* KeyboardHandler::TheKeyboardHandler = 0;

KeyboardHandler* KeyboardHandler::getInstance() {
	/* Generate the single object on first call */
	if (!TheKeyboardHandler) {
		TheKeyboardHandler = new KeyboardHandler;
	}
	/* Return the single object */
	return TheKeyboardHandler;
}

