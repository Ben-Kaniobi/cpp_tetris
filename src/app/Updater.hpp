/*
 * Updater.h
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

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
