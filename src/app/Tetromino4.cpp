/*
 * Tetromino4.cpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#include "Libraries.hpp"
#include "Tetromino4.hpp"

/* Definition of static const, Tick time in ms */
const Point2D Tetromino4::startPos = {
	static_cast<int>(MAP_WIDTH/2),
	-2  /* So it's not visible just yet */
};

Tetromino4::Tetromino4(ColorType Color)
:Tetromino(startPos) {
//TODO: inizialise startPos
	for(int i=0; i<2; i++) {
		for(int j=0; j<2; j++) {
			pSquares[i][j] = new Block(Color);
		}
	}
};

void Tetromino4::rotate(bool Cw) {
	/* Tetromino4 doesn't need to be rotated */
}

