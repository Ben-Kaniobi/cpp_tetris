/******************************************************************************/
/*! \file Updater.cpp
 ******************************************************************************
 *  \author    kasen1
 *  \author    plats1
 *
 *  \version   0.1.0
 *
 *  \date      2014-04-28  v0.0.1  File created
 *  \date      2014-06-11  v0.1.0  Implemented all but class map and class line
 ******************************************************************************/

#include "Libraries.hpp"
#include "Updater.hpp"

/* Global static pointer used to ensure a single instance of the class */
Updater* Updater::theUpdater = 0;

/* Definition of static const, Tick time in ms */
const unsigned int Updater::tickTime = 1000;

/* Variable to communicate if update needed */
volatile bool updateTick = false;

static void TimerHandler(void *Param) {
	updateTick = true;
}

Updater::~Updater() {
	/* Delete the single object */
	delete theUpdater;
}

Updater* Updater::getInstance() {
	/* Generate the single object on first call */
	if (!theUpdater) {
		theUpdater = new Updater;
	}
	/* Return the single object */
	return theUpdater;
}

void Updater::start() {
	StartTimer(tickTime, 0, TimerHandler);
}

void Updater::stop() {
	StopTimer();
}

void Updater::updateGame(Tetromino *TheTetromino, bool Now) {
	if(updateTick || Now) {
		if(updateTick) {
			TheTetromino->move(DirDown);
		}

		ClearWindow();
		TheTetromino->draw();
		//TODO

		/* Reset variable, so the TimerHandler can set it again */
		updateTick = false;
	}
}
