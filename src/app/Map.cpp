/*
 * Map.cpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#include "Map.hpp"

/* Global static pointer used to ensure a single instance of the class */
Map* Map::TheMap = 0;

Map* Map::getInstance() {
	/* Generate the single object on first call */
	if (!TheMap) {
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
