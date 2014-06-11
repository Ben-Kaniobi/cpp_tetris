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
	//TODO
	return true;
}

void Line::setBlock(Block &theBlock, int xPos) {
	//TODO
}

bool Line::isFull() {
	//TODO
	return true;
}
