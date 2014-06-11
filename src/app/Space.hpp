/******************************************************************************/
/*! \file Space.hpp
 ******************************************************************************
 *  \author    kasen1
 *  \author    plats1
 *
 *  \version   0.1.0
 *
 *  \date      2014-04-28  v0.0.1  File created
 *  \date      2014-06-11  v0.1.0  Implemented all but class map and class line
 ******************************************************************************/

#ifndef SPACE_HPP_
#define SPACE_HPP_

#include "Square.hpp"

class Space: public Square {
public:
	squareType getType() {return typeSpace;};
	ColorType getColor() {return ColBlack;};
};

#endif /* SPACE_HPP_ */
