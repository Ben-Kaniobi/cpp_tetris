/*
 * Map.cpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

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

// 	/* Create tetromino with random number in range 0 to 6 */
// 	switch(rand() % 7) {
// 	case 0: theTetromino = TetrominoI(); break;
// 	case 1: theTetromino = TetrominoO(); break;
// 	case 2: theTetromino = TetrominoT(); break;
// 	case 3: theTetromino = TetrominoJ(); break;
// 	case 4: theTetromino = TetrominoL(); break;
// 	case 5: theTetromino = TetrominoS(); break;
// 	case 6: theTetromino = TetrominoZ(); break;
// 	default: /* Not possible */ break;
// 	}
}
