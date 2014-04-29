/*
 * Block.h
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#ifndef BLOCK_HPP_
#define BLOCK_HPP_

#include "Libraries.hpp"
#include "Square.hpp"

class Block: public Square {
private:
	ColorType color;

public:
	Block(ColorType Color) {this->color = Color;};
};

#endif /* BLOCK_HPP_ */
