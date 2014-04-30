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
	/* Fill square list, depending on type */
	switch(typeTetrominoT /*TODO: something like this->getType()*/) {
	case typeTetrominoT:
		/* Fill square list for TetrominoT */
		//TODO: Verify
		for(unsigned int i=0; i<sideNum; i++) {
			for(unsigned int j=0; j<sideNum; j++) {
				/* Vertical "T", all squares with i=1 are blocks and also if i=2 and j=1 */
				if(i == 1 || (i == 2 && j == 1)) {
					squares.push_back(new Block(Color));
				}
				else {
					squares.push_back(new Space());
				}
			}
		}
		break;

	case typeTetrominoJ:
		//TODO
		break;

	case typeTetrominoL:
		//TODO
		break;

	case typeTetrominoS:
		//TODO
		break;

	case typeTetrominoZ:
		//TODO
		break;
	default:
		/* Not possible */
		break;
	}
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
