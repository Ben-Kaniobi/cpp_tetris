/*
 * Line.hpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#ifndef LINE_HPP_
#define LINE_HPP_

#include "Block.hpp"

class Line {
private:
	int yPos;

public:
	bool isSquareFree(int xPos);
	void setBlock(Block &theBlock, int xPos);
	bool isFull();
};

#endif /* LINE_HPP_ */
