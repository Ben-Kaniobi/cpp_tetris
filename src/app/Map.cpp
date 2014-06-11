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
Map* Map::theMap = 0;

Map::Map() {
	/* Fill lines list with only spaces */
	for(unsigned int i=0; i<MAP_HEIGHT; i++) {
		pLines[i] = new Line(i);
	}
}

Map::~Map() {
	/* Clean up every created object in pLines array */
	for(unsigned int i=0; i<MAP_HEIGHT; i++) {
		delete pLines[i];
	}
	/* Delete the single object */
	delete theMap;
}

Map* Map::getInstance() {
	if (!theMap) {
		/* Generate the single object on first call */
		theMap = new Map;
	}
	/* Return the single object */
	return theMap;
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
