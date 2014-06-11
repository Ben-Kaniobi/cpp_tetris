/******************************************************************************/
/*! \file GameHandler.hpp
 ******************************************************************************
 *  \author    kasen1
 *  \author    plats1
 *
 *  \version   0.1.0
 *
 *  \date      2014-04-28  v0.0.1  File created
 *  \date      2014-06-11  v0.1.0  Implemented all but class map and class line
 ******************************************************************************/

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
	~GameHandler();
	static GameHandler* getInstance();
	void gameOver();
	bool isRunning() {return running;};
	void stop();
};

#endif /* GAMEHANDLER_HPP_ */
