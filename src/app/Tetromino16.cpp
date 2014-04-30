/*
 * Tetromino16.cpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#include "Libraries.hpp"
#include "Tetromino16.hpp"
#include "Map.hpp"

/* Definition of static const, Tick time in ms */
const Point2D Tetromino16::startPos = {
	static_cast<int>(MAP_WIDTH/2),
	-4  /* So it's not visible just yet */};

Tetromino16::Tetromino16(ColorType Color)
:Tetromino(startPos) {
	//TODO: inizialise startPos
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
