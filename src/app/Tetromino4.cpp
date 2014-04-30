/*
 * Tetromino4.cpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#include <iostream>
#include "Libraries.hpp"
#include "Tetromino4.hpp"
#include <sstream>

std::string itos(int i){
	std::stringstream ss;
	ss<<i;
	return ss.str();
}

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
	/* Draw each square */
	for(unsigned int i=0; i<2; i++) {
		for(unsigned int j=0; j<2; j++) {
			if(squares[i+j].getType() == typeBlock) {
				int x = (position.x + i%2) * SQUARE_WIDTH;
				int y = (position.y + j%2) * SQUARE_WIDTH;
				if(y >= 0) {
					DrawFilledRectangle(x, y, SQUARE_WIDTH, SQUARE_WIDTH, squares[i+j].getColor(), 0);
				}
			}
		}
	}
}
