/*
 * Updater.cpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#include "Libraries.hpp"
#include "Updater.hpp"

/* Global static pointer used to ensure a single instance of the class */
Updater* Updater::theUpdater = 0;

Updater* Updater::getInstance() {
	/* Generate the single object on first call */
	if (!theUpdater) {
		theUpdater = new Updater;
	}
	/* Return the single object */
	return theUpdater;
}

/* Definition of static const, Tick time in ms */
const unsigned int Updater::tickTime = 1000;

/* Variable to communicate if update needed */
volatile bool updateNow = false;

static void TimerHandler(void *Param) {
	updateNow = true;
}

void Updater::start() {
	StartTimer(tickTime, 0, TimerHandler);
}

void Updater::stop() {
	StopTimer();
}

void Updater::updateGame() {
	if(updateNow) {

		//TODO

		/* Reset variable, so the TimerHandler can set it again */
		updateNow = false;
	}
}
