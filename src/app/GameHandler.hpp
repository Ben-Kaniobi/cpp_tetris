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
	GameHandler() {};
	/* Copy constructor private */
	GameHandler(GameHandler const&) {};
	/* Assignment operator private */
	void operator=(GameHandler const&) {};
	/* The single object */
	static GameHandler* theGameHandler;

public:
	static GameHandler* getInstance();
	static void gameOver();
};

#endif /* GAMEHANDLER_HPP_ */
