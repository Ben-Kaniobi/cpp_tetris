/*
 * Space.hpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#ifndef SPACE_HPP_
#define SPACE_HPP_

#include "Square.hpp"

class Space: public Square {
public:
	squareType getType() {return typeSpace;};
};

#endif /* SPACE_HPP_ */
