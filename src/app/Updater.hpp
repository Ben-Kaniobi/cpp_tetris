/******************************************************************************/
/*! \file Updater.hpp
 ******************************************************************************
 *  \author    kasen1
 *  \author    plats1
 *
 *  \version   0.1.0
 *
 *  \date      2014-04-28  v0.0.1  File created
 *  \date      2014-06-11  v0.1.0  Implemented all but class map and class line
 ******************************************************************************/

#ifndef UPDATER_HPP_
#define UPDATER_HPP_

#include "Tetromino.hpp"

class Updater {
private:
	/* Constructor private */
	Updater() {};
	/* Copy constructor private */
	Updater(Updater const&) {};
	/* Assignment operator private */
	void operator=(Updater const&) {};
	/* The single object */
	static Updater* theUpdater;
	/* Tick time in ms */
	static const unsigned int tickTime;

public:
	static Updater* getInstance();
	void start();
	void stop();
	void updateGame(Tetromino *TheTetromino, bool Now);
};

#endif /* UPDATER_HPP_ */
