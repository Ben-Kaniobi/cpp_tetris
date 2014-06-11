/******************************************************************************/
/*! \file Map.cpp
 ******************************************************************************
 *  \author    kasen1
 *  \author    plats1
 *
 *  \version   0.1.0
 *
 *  \date      2014-04-28  v0.0.1  File created
 *  \date      2014-06-11  v0.1.0  Implemented all but class map and class line
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "Map.hpp"
#include "TetrominoI.hpp"
#include "TetrominoO.hpp"
#include "TetrominoT.hpp"
#include "TetrominoJ.hpp"
#include "TetrominoL.hpp"
#include "TetrominoS.hpp"
#include "TetrominoZ.hpp"

/* Global static pointer used to ensure a single instance of the class */
Map* Map::TheMap = 0;

Map* Map::getInstance() {
	if (!TheMap) {
		/* Generate the single object on first call */
		TheMap = new Map;
	}
	/* Return the single object */
	return TheMap;
}

bool Map::isTetrominoFree(const Tetromino &theTetromino) {
	//TODO
	return true;
}

void Map::removeLine(int yPos) {
	//TODO
}

void Map::mergeToMap(Tetromino &theTetromino) {
	//TODO
}
