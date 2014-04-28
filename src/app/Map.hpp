/*
 * Map.h
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#ifndef MAP_HPP_
#define MAP_HPP_

#include "Tetromino.hpp"

class Map {
private:
	/* Constructor private */
	Map() {};
	/* Copy constructor private */
	Map(Map const&) {};
	/* Assignment opperator private */
	void operator=(Map const&) {};
	/* The single object */
	static Map* TheMap;

public:
	static Map* getInstance();
	static bool isTetrominoFree(const Tetromino &theTetromino);
	static void removeLine(int yPos);
	static void mergeToMap(Tetromino &theTetromino);
};

#endif /* MAP_HPP_ */
