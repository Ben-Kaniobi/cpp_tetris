/*
 * Tetromino16.cpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#include "Libraries.hpp"
#include "Tetromino16.hpp"

/* Definition of static const, Tick time in ms */
const Point2D Tetromino16::startPos = {
	static_cast<int>(MAP_WIDTH/2),
	-4  /* So it's not visible just yet */};

Tetromino16::Tetromino16(ColorType Color)
:Tetromino(startPos) {
	//TODO: inizialise startPos
}

void Tetromino16::rotate(bool Cw) {
	/* First call parrent method to update rotation attribute */
	Tetromino::rotate(Cw);

	//TODO rearange squares
}
