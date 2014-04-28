/*
 * Square.hpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#ifndef SQUARE_HPP_
#define SQUARE_HPP_

class Square {
private:
	/* Define pure virtual method, to make class abstract */
	virtual void notUsed() = 0;

public:
	/* Destructor has to be virtual too */
	virtual ~Square() {};
};

#endif /* SQUARE_HPP_ */
