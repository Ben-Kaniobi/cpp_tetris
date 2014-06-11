/******************************************************************************/
/*! \file Map.hpp
 ******************************************************************************
 *  \author    kasen1
 *  \author    plats1
 *
 *  \version   0.1.0
 *
 *  \date      2014-04-28  v0.0.1  File created
 *  \date      2014-06-11  v0.1.0  Implemented all but class map and class line
 ******************************************************************************/

#ifndef MAP_HPP_
#define MAP_HPP_

#include "Tetromino.hpp"
#include "Line.hpp"

class Map {
private:
	/* Constructor private */
	Map();
	/* Copy constructor private */
	Map(Map const&) {};
	/* Assignment opperator private */
	void operator=(Map const&) {};
	/* The single object */
	static Map* theMap;
	/* Pointer array to avoid splicing */
	Line *pLines[MAP_HEIGHT];

public:
	~Map();
	static Map* getInstance();
	bool isTetrominoFree(const Tetromino &theTetromino);
	void removeLine(int yPos);
	void mergeToMap(Tetromino &theTetromino);
};

#endif /* MAP_HPP_ */
