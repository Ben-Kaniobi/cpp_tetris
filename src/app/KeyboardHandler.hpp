/*
 * KeyboardHandler.hpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#ifndef KEYBOARDHANDLER_HPP_
#define KEYBOARDHANDLER_HPP_

class KeyboardHandler {
private:
	/* Constructor private */
	KeyboardHandler(){};
	/* Copy constructor private */
	KeyboardHandler(KeyboardHandler const&){};
	/* Assignment opperator private */
	void operator=(KeyboardHandler const&){};
	/* The single object */
	static KeyboardHandler* TheKeyboardHandler;

public:
	static KeyboardHandler* getInstance();
};

#endif /* KEYBOARDHANDLER_HPP_ */
