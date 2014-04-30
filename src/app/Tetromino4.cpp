/*
 * Tetromino4.cpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#include "Libraries.hpp"
#include "Tetromino4.hpp"
#include "Map.hpp"

/* Definition of static const, Tick time in ms */
const Point2D Tetromino4::startPos = {
	static_cast<int>(MAP_WIDTH/2)-1,
	-2  /* So it's not visible just yet */};

Tetromino4::Tetromino4(ColorType Color)
:Tetromino(startPos) {
	/* Initialise square list with only blocks */
	for(unsigned int i=0; i<4; i++) {
		squares.push_back(new Block(Color));
	}
}

Tetromino4::~Tetromino4() {
	/* Delete square list */
	squares.clear();
}

void Tetromino4::rotate(bool Cw) {
	/* Tetromino4 doesn't need to be rotated */
}

void Tetromino4::draw() {
	int x, y;
	/* Draw each square */
	for(unsigned int i=0; i<2; i++) {
		for(unsigned int j=0; j<2; j++) {
			if(squares.at(4*i+j).getType() == typeBlock) {
				x = ((position.x + j) * SQUARE_WIDTH) + 1;
				y = ((position.y + i) * SQUARE_WIDTH) + 1;
				if(y >= 0) {
					DrawFilledRectangle(x, y, SQUARE_WIDTH, SQUARE_WIDTH, squares.at(4*i+j).getColor(), 0);
				}
			}
		}
	}
}
