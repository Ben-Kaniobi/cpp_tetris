/*
 * Tetromino9.cpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#include "Libraries.hpp"
#include "Tetromino9.hpp"

/* Definition of static const, Tick time in ms */
const Point2D Tetromino9::startPos = {
	static_cast<int>(MAP_WIDTH/2),
	-3  /* So it's not visible just yet */
};

Tetromino9::Tetromino9(ColorType Color)
:Tetromino(startPos) {
	//TODO: inizialise startPos
};

void Tetromino9::rotate(bool Cw) {
	/* First call parrent method to update rotation attribute */
	Tetromino::rotate(Cw);

	//TODO rearange squares
}

