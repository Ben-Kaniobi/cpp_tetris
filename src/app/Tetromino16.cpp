/*
 * Tetromino16.cpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#include "Tetromino16.hpp"

/* Definition of static consts */
const unsigned int sideNum = 4;
const Point2D Tetromino16::startPos = {
	static_cast<int>((MAP_WIDTH-sideNum)/2),
	0-static_cast<int>(sideNum)  /* So it's not visible just yet */};

Tetromino16::Tetromino16(ColorType Color)
:Tetromino(startPos) {
	/* Fill square list */
	for(unsigned int i=0; i<sideNum; i++) {
		for(unsigned int j=0; j<sideNum; j++) {
			/* Vertical "I", all squares with j=2 are blocks */
			if(j == 2) {
				squares.push_back(new Block(Color));
			}
			else {
				squares.push_back(new Space());
			}
		}
	}
}

void Tetromino16::rotate(bool Cw) {
//	/* Check if new tetromino is free */
//	if(Map::getInstance()->isTetrominoFree(*temp)) {
//		/* Call parrent method to update rotation attribute */
//		Tetromino::rotate(Cw);
//
//		//TODO rearange squares
//	}
//	else { /* Tetromino not free */
//		Map::getInstance()->mergeToMap(*this);
//	}
}

/* TODO: Maybe implement in Tetromino */
void Tetromino16::draw() {
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
