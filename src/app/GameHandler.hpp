/*
 * GameHandler.hpp
 *
 *  Created on: 28.04.2014
 *      Author: kasen1
 */

#ifndef GAMEHANDLER_HPP_
#define GAMEHANDLER_HPP_

class GameHandler {
private:
	/* Constructor private */
	GameHandler(){};
	/* Copy constructor private */
	GameHandler(GameHandler const&){};
	/* Assignment opperator private */
	void operator=(GameHandler const&){};
	/* The single object */
	static GameHandler* TheGameHandler;

public:
	static GameHandler* getInstance();
	void testingMethod();
};

#endif /* GAMEHANDLER_HPP_ */
