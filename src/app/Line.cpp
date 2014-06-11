/******************************************************************************/
/*! \file Line.cpp
 ******************************************************************************
 *  \author    kasen1
 *  \author    plats1
 *
 *  \version   0.1.0
 *
 *  \date      2014-04-28  v0.0.1  File created
 *  \date      2014-06-11  v0.1.0  Implemented all but class map and class line
 ******************************************************************************/

#include "Line.hpp"

Line::Line(int YPos) {
	this->yPos = YPos;

	/* Fill square list with only spaces */
	for(unsigned int i=0; i<MAP_WIDTH; i++) {
		pSquares[i] = new Space();
	}
}

Line::~Line() {
	/* Clean up every created object in pSquares array */
	for(unsigned int i=0; i<MAP_WIDTH; i++) {
		delete pSquares[i];
	}
}

bool Line::isSquareFree(int xPos) {
	/* Check input range */
	if(xPos < 0 || xPos >= MAP_WIDTH) {
		return false;
	}
	/* Check type */
	else if(pSquares[xPos]->getType() == typeBlock) {
		return false;
	}
	else /* typeSpace */ {
		return true;
	}
}

void Line::setBlock(ColorType color, int xPos) {
	/* Check input range */
	if(xPos < 0 || xPos >= MAP_WIDTH) {
		return;
	}

	/* Delete the old object */
	delete pSquares[xPos];
	/* Create the new object */
	pSquares[xPos] = new Block(color);
}

bool Line::isFull() {
	/* Check every square */
	for(unsigned int i=0; i<MAP_WIDTH; i++) {
		if(pSquares[i]->getType() == typeSpace) {
			return false;
		}
		/* Else continue loop */
	}
	/* No square was a space, so the line is full (of blocks) */
	return true;
}
