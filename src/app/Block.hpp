/*
 * Block.h
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#ifndef BLOCK_HPP_
#define BLOCK_HPP_

#include "Square.hpp"

class Block: public Square {
private:
	ColorType color;

public:
	Block(ColorType Color) {this->color = Color;};
	squareType getType() {return typeBlock;};
	ColorType getColor() {return color;};
};

#endif /* BLOCK_HPP_ */
