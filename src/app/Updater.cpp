/*
 * Updater.cpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#include "Updater.hpp"

/* Global static pointer used to ensure a single instance of the class */
Updater* Updater::TheUpdater = 0;

Updater* Updater::getInstance() {
	/* Generate the single object on first call */
	if (!TheUpdater) {
		TheUpdater = new Updater;
	}
	/* Return the single object */
	return TheUpdater;
}

