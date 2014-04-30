/*
 * Tetromino16.cpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#include "Libraries.hpp"
#include "Tetromino16.hpp"

const int width = 4;

/* Definition of static const, Tick time in ms */
const Point2D Tetromino16::startPos = {
	static_cast<int>(MAP_WIDTH/2) - 2,
	-width  /* So it's not visible just yet */};

Tetromino16::Tetromino16(ColorType Color)
:Tetromino(startPos) {
	/* Initialise square list */
	for(unsigned int i=0; i<width; i++) {
		for(unsigned int j=0; j<width; j++) {
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

/* Todo, maybe implement in Tetromino */
void Tetromino16::draw() {
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
