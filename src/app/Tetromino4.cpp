/*
 * Tetromino4.cpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#include "Tetromino4.hpp"

/* Definition of static consts */
const unsigned int sideNum = 2;
const Point2D Tetromino4::startPos = {
	static_cast<int>((MAP_WIDTH-sideNum)/2),
	0-static_cast<int>(sideNum)  /* So it's not visible just yet */};

Tetromino4::Tetromino4(ColorType Color)
:Tetromino(startPos) {
	/* Fill square list with only blocks */
	for(unsigned int i=0; i<(sideNum*sideNum); i++) {
		squares.push_back(new Block(Color));
	}
}

void Tetromino4::rotate(bool Cw) {
	/* Tetromino4 doesn't need to be rotated */
}

/* TODO: Maybe implement in Tetromino */
void Tetromino4::draw() {
	unsigned int n = sideNum;
	int x, y;
	/* Draw each square, i: y-axis, j: x-axis */
	for(unsigned int i=0; i<n; i++) {
		for(unsigned int j=0; j<n; j++) {
			if(squares.at(n*i+j).getType() == typeBlock) {
				x = (position.x + j) * SQUARE_WIDTH;
				y = (position.y + i) * SQUARE_WIDTH;
				if(y >= 0) {
					/* Draw block, width - 1 to fix bug when line should have 0 width */
					DrawFilledRectangle(x, y, SQUARE_WIDTH-1, SQUARE_WIDTH-1, squares.at(n*i+j).getColor(), 0);
				}
			}
		}
	}
}
