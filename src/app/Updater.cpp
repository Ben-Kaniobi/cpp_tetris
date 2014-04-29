/*
 * Updater.cpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

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

void Updater::start() {
	//TODO
}

void Updater::stop() {
	//TODO
}

void Updater::updateGame() {
	//TODO
}
