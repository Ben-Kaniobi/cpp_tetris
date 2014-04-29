/*
 * Updater.h
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#ifndef UPDATER_HPP_
#define UPDATER_HPP_

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
	static void start();
	static void stop();
	static void updateGame();
};


#endif /* UPDATER_HPP_ */
