/******************************************************************************/
/*! \file Tetromino16.cpp
 ******************************************************************************
 *  \author    kasen1
 *  \author    plats1
 *
 *  \version   0.1.0
 *
 *  \date      2014-04-28  v0.0.1  File created
 *  \date      2014-06-11  v0.1.0  Implemented all but class map and class line
 ******************************************************************************/

#include "Tetromino16.hpp"

/* Definition of static consts */
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
				pSquares[i][j] = new Block(Color);
			}
			else {
				pSquares[i][j] = new Space();
			}
		}
	}
}

Tetromino16::~Tetromino16() {
	/* Clean up every created object in pSquares array */
	for(unsigned int i=0;i<sideNum;i++) {
		for(unsigned int j=0;j<sideNum;j++) {
			delete pSquares[i][j];
		}
	}
}

void Tetromino16::rotate(bool Cw) {
//TODO Implement 'Map' first
//	/* Check if new tetromino is free */
//	if(Map::getInstance()->isTetrominoFree(*tempTetromino)) {
//		/* Call parent method to update rotation attribute */
//		Tetromino::rotate(Cw);

		/* Rearange squares */
		Square *temp;
		if(Cw) {
			for(unsigned int i=0; i<sideNum/2; i++) {
				for(unsigned int j=0; j<(sideNum+1)/2; j++) {
					temp = pSquares[i][j];
					pSquares[i][j] = pSquares[sideNum-1-j][i];
					pSquares[sideNum-1-j][i] = pSquares[sideNum-1-i][sideNum-1-j];
					pSquares[sideNum-1-i][sideNum-1-j] = pSquares[j][sideNum-1-i];
					pSquares[j][sideNum-1-i] = temp;
				}
			}
		}
		else /* CCW */ {
			for(unsigned int j=0; j<sideNum/2; j++) {
				for(unsigned int i=0; i<(sideNum+1)/2; i++) {
					temp = pSquares[j][sideNum-1-i];
					pSquares[j][sideNum-1-i] = pSquares[sideNum-1-i][sideNum-1-j];
					pSquares[sideNum-1-i][sideNum-1-j] = pSquares[sideNum-1-j][i];
					pSquares[sideNum-1-j][i] = pSquares[i][j];
					pSquares[i][j] = temp;
				}
			}
		}
//TODO Implement 'Map' first
//	}
//	else { /* Tetromino not free */
//		Map::getInstance()->mergeToMap(*this);
//	}
}

void Tetromino16::draw() {
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
