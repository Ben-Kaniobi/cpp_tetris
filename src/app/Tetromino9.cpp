/*
 * Tetromino9.cpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#include "Libraries.hpp"
#include "Tetromino9.hpp"

const int width = 3;

/* Definition of static const, Tick time in ms */
const Point2D Tetromino9::startPos = {
	static_cast<int>(MAP_WIDTH/2),
	-width  /* So it's not visible just yet */};

Tetromino9::Tetromino9(ColorType Color)
:Tetromino(startPos) {
	//TODO: inizialise startPos
}

void Tetromino9::rotate(bool Cw) {
	/* First call parrent method to update rotation attribute */
	Tetromino::rotate(Cw);

	//TODO rearange squares
}

/* Todo, maybe implement in Tetromino */
void Tetromino9::draw() {
	int x, y;
	/* Draw each square */
	for(unsigned int i=0; i<width; i++) {
		for(unsigned int j=0; j<width; j++) {
			if(squares.at(width*i+j).getType() == typeBlock) {
				x = ((position.x + j) * SQUARE_WIDTH) + 1;
				y = ((position.y + i) * SQUARE_WIDTH) + 1;
				if(y >= 0) {
					DrawFilledRectangle(x, y, SQUARE_WIDTH, SQUARE_WIDTH, squares.at(width*i+j).getColor(), 0);
				}
			}
		}
	}
}
