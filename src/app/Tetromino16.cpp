/*
 * Tetromino16.cpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#include "Libraries.hpp"
#include "Tetromino16.hpp"
#include "Map.hpp"

#include <iostream>

/* Definition of static const, Tick time in ms */
const Point2D Tetromino16::startPos = {
	static_cast<int>(MAP_WIDTH/2) - 2,
	-4  /* So it's not visible just yet */};

Tetromino16::Tetromino16(ColorType Color)
:Tetromino(startPos) {
	/* Initialise square list */
	for(unsigned int i=0; i<4; i++) {
		for(unsigned int j=0; j<4; j++) {
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

void Tetromino16::draw() {
	int x, y;
	/* Draw each square */
	for(unsigned int i=0; i<4; i++) {
		for(unsigned int j=0; j<4; j++) {
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
