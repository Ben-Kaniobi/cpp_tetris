/*
 * Tetromino9.cpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#include "Tetromino9.hpp"

/* Definition of static consts */
const Point2D Tetromino9::startPos = {
	static_cast<int>((MAP_WIDTH-sideNum)/2),
	0-static_cast<int>(sideNum)  /* So it's not visible just yet */};

Tetromino9::Tetromino9(ColorType Color, tetrominoType Type)
:Tetromino(startPos) {
	/* Fill square list, depending on type */
	switch(Type) {
	case typeTetrominoT:
		/* Fill square list for TetrominoT */
		for(unsigned int i=0; i<sideNum; i++) {
			for(unsigned int j=0; j<sideNum; j++) {
				/* Vertical "T", all squares with i=1 are blocks and also if i=2 and j=1 */
				if(i == 1 || (i == 2 && j == 1)) {
					pSquares[i][j] = new Block(Color);
				}
				else {
					pSquares[i][j] = new Space();
				}
			}
		}
		break;

	case typeTetrominoJ:
		/* Fill square list for TetrominoJ */
		for(unsigned int i=0; i<sideNum; i++) {
			for(unsigned int j=0; j<sideNum; j++) {
				/* Vertical "J", all squares with j=1 are blocks and also if i=2 and j=0 */
				if(j == 1 || (i == 2 && j == 0)) {
					pSquares[i][j] = new Block(Color);
				}
				else {
					pSquares[i][j] = new Space();
				}
			}
		}
		break;

	case typeTetrominoL:
		/* Fill square list for TetrominoL */
		for(unsigned int i=0; i<sideNum; i++) {
			for(unsigned int j=0; j<sideNum; j++) {
				/* Upside-down "L", all squares with j=1 are blocks and also if i=0 and j=0 */
				if(j == 1 || (i == 0 && j == 0)) {
					pSquares[i][j] = new Block(Color);
				}
				else {
					pSquares[i][j] = new Space();
				}
			}
		}
		break;

	case typeTetrominoS:
		/* Fill square list for TetrominoS */
		for(unsigned int i=0; i<sideNum; i++) {
			for(unsigned int j=0; j<sideNum; j++) {
				/* -90 degrees rotated "S", all squares with j=2 are spaces and also if i=2 and j=0, just as if i=0 and j=1 */
				if(j == 2 || (i == 2 && j == 0) || (i == 0 && j == 1)) {
					pSquares[i][j] = new Space();
				}
				else {
					pSquares[i][j] = new Block(Color);
				}
			}
		}
		break;

	case typeTetrominoZ:
		/* Fill square list for TetrominoZ */
		for(unsigned int i=0; i<sideNum; i++) {
			for(unsigned int j=0; j<sideNum; j++) {
				/* 90 degrees rotated "Z", all squares with j=2 are spaces and also if i=0 and j=0, just as if i=2 and j=1 */
				if(j == 2 || (i == 0 && j == 0) || (i == 2 && j == 1)) {
					pSquares[i][j] = new Space();
				}
				else {
					pSquares[i][j] = new Block(Color);
				}
			}
		}
		break;
	default:
		/* Not possible */
		break;
	}
}

Tetromino9::~Tetromino9() {
	/* Clean up every created object in pSquares array */
	for(unsigned int i=0;i<sideNum;i++) {
		for(unsigned int j=0;j<sideNum;j++) {
			delete pSquares[i][j];
		}
	}
}

void Tetromino9::rotate(bool Cw) {
	/* Check if new tetromino is free */
	//TODO
	/* Then call parent method to update rotation attribute */
	Tetromino::rotate(Cw);

//	Square *temp;
//	temp = pSquares[0][0];
//	pSquares[0][0] = pSquares[2][0];
//	pSquares[2][0] = pSquares[2][2];
//	pSquares[2][2] = pSquares[0][2];
//	pSquares[0][2] = temp;
//
//	temp = pSquares[1][0];
//	pSquares[1][0] = pSquares[2][1];
//	pSquares[2][1] = pSquares[1][2];
//	pSquares[1][2] = pSquares[0][1];
//	pSquares[0][1] = temp;

//	Square *temp;
//	for(unsigned int i=0; i<sideNum/2; i++) {
//		for(unsigned int j=0; j<(sideNum+1)/2; j++) {
//			temp = pSquares[i][j];
//			pSquares[i][j] = pSquares[sideNum-1-j][i];
//			pSquares[sideNum-1-j][i] = pSquares[sideNum-1-i][sideNum-1-j];
//			pSquares[sideNum-1-i][sideNum-1-j] = pSquares[j][sideNum-1-i];
//			pSquares[j][sideNum-1-i] = temp;
//		}
//	}
}

void Tetromino9::draw() {
	int x, y;
	/* Draw each square, i: y-axis, j: x-axis */
	for(unsigned int i=0; i<sideNum; i++) {
		for(unsigned int j=0; j<sideNum; j++) {
			if(pSquares[i][j]->getType() == typeBlock) {
				x = (position.x + j) * SQUARE_WIDTH;
				y = (position.y + i) * SQUARE_WIDTH;
				if(y >= 0) {
					/* Draw block, width - 1 to fix bug when line should have 0 width */
					DrawFilledRectangle(x, y, SQUARE_WIDTH-1, SQUARE_WIDTH-1, pSquares[i][j]->getColor(), 0);
				}
			}
		}
	}
}
