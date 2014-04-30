/*
 * Square.hpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#ifndef SQUARE_HPP_
#define SQUARE_HPP_

/* Definitions of sub classes for getType method */
enum squareType {typeBlock, typeSpace};

class Square {
protected:
	/* Constructor protected for abstract class */
	Square() {};

public:
	/* Pure virtual method to make class abstract */
	virtual squareType getType() = 0;
	/* Destructor has to be virtual */
	virtual ~Square() {};
};

#endif /* SQUARE_HPP_ */
