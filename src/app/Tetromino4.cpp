/*
 * Tetromino4.cpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#include "Libraries.hpp"
#include "Tetromino4.hpp"

/* Definition of static const, Tick time in ms */
const Point2D Tetromino4::startPos = {
	static_cast<int>(MAP_WIDTH/2),
	-2  /* So it's not visible just yet */};

Tetromino4::Tetromino4(ColorType Color)
:Tetromino(startPos) {
	/* Initialise square list with only blocks */
	for(unsigned int i=0; i<4; i++) {
		squares.push_back(Block(Color)); //TODO: This probably creates splicing..?
	}
}

Tetromino4::~Tetromino4() {
	/* Delete square list */
	squares.clear();
}

void Tetromino4::rotate(bool Cw) {
	/* Tetromino4 doesn't need to be rotated */
}

