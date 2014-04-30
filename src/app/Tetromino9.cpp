/*
 * Tetromino9.cpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#include "Tetromino9.hpp"

/* Definition of static consts */
const unsigned int sideNum = 3;
const Point2D Tetromino9::startPos = {
	static_cast<int>((MAP_WIDTH-sideNum)/2),
	0-static_cast<int>(sideNum)  /* So it's not visible just yet */};

Tetromino9::Tetromino9(ColorType Color)
:Tetromino(startPos) {
	/* Fill square list */
	//TODO
}

void Tetromino9::rotate(bool Cw) {
	/* First call parrent method to update rotation attribute */
	Tetromino::rotate(Cw);

	//TODO rearange squares
}

/* TODO: Maybe implement in Tetromino */
void Tetromino9::draw() {
	unsigned int n = sideNum;
	int x, y;
	/* Draw each square, i: y-axis, j: x-axis */
	for(unsigned int i=0; i<n; i++) {
		for(unsigned int j=0; j<n; j++) {
			if(squares.at(n*i+j).getType() == typeBlock) {
				x = ((position.x + j) * SQUARE_WIDTH) + 1;
				y = ((position.y + i) * SQUARE_WIDTH) + 1;
				if(y >= 0) {
					DrawFilledRectangle(x, y, SQUARE_WIDTH, SQUARE_WIDTH, squares.at(n*i+j).getColor(), 0);
				}
			}
		}
	}
}
