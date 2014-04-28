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
	KeyboardHandler() {};
	/* Copy constructor private */
	KeyboardHandler(KeyboardHandler const&) {};
	/* Assignment operator private */
	void operator=(KeyboardHandler const&) {};
	/* The single object */
	static KeyboardHandler* theKeyboardHandler;

public:
	static KeyboardHandler* getInstance();
	static void start();
	static void stop();
	static void updateGame();
};

#endif /* KEYBOARDHANDLER_HPP_ */
