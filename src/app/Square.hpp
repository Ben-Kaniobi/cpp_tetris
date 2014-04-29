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
	/* Copy constructor private */
	Square(Square const&) {};
	/* Assignment operator private */
	void operator=(Square const&) {};

protected:
	/* Constructor protected for abstract class */
	Square() {};

public:
	/* Destructor has to be virtual */
	virtual ~Square() {};
};

#endif /* SQUARE_HPP_ */
