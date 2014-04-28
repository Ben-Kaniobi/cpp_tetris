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
	Updater(){};
	/* Copy constructor private */
	Updater(Updater const&){};
	/* Assignment opperator private */
	void operator=(Updater const&){};
	/* The single object */
	static Updater* TheUpdater;

public:
	static Updater* getInstance();
};

#endif /* UPDATER_HPP_ */
