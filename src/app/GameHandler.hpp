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
	GameHandler() {running = true;};
	/* Copy constructor private */
	GameHandler(GameHandler const&) {running = true;};
	/* Assignment operator private */
	void operator=(GameHandler const&) {};
	/* The single object */
	static GameHandler* theGameHandler;
	/* Variable to track if program should be closed */
	bool running;

public:
	static GameHandler* getInstance();
	void gameOver();
	bool isRunning() {return running;};
	void stop();
};

#endif /* GAMEHANDLER_HPP_ */
