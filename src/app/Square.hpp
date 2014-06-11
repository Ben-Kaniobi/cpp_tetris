/******************************************************************************/
/*! \file Square.hpp
 ******************************************************************************
 *  \author    kasen1
 *  \author    plats1
 *
 *  \version   0.1.0
 *
 *  \date      2014-04-28  v0.0.1  File created
 *  \date      2014-06-11  v0.1.0  Implemented all but class map and class line
 ******************************************************************************/

#ifndef SQUARE_HPP_
#define SQUARE_HPP_

#include "Libraries.hpp"

/* Definitions of sub classes for getType method */
enum squareType {typeBlock, typeSpace};

class Square {
protected:
	/* Constructor protected for abstract class */
	Square() {};

public:
	/* Pure virtual method to make class abstract */
	virtual squareType getType() = 0;
	virtual ColorType getColor() = 0;
	/* Destructor has to be virtual */
	virtual ~Square() {};
};

#endif /* SQUARE_HPP_ */
