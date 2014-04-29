/*
 * Libraries.hpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#ifndef LIBRARIES_HPP_
#define LIBRARIES_HPP_

/* Library includes */
extern "C" {
	#include "../lib/error.h"
	#include "../lib/window.h"
	#include "../lib/communication.h"
	//#include "../lib/ConsoleFunctions.h"
}

/* Global defines */
#define MAP_WIDTH    10    /* Number of blocks in x axis */
#define MAP_HEIGHT   20    /* Number of blocks in y axis */
#define SQUARE_WIDTH 30    /* Width * height of one block */
#define WIN_WIDTH    (SQUARE_WIDTH*MAP_WIDTH)
#define WIN_HEIGHT   (SQUARE_WIDTH*MAP_HEIGHT)

/* Enums */
enum Rotation {rotZero, rotNinety, rotOneeighty, rotTwoseventy};

/* Structs */
struct Point2D {
	int x;
	int y;
};

/* Global variables */
extern const ColorType ColBlack;


#endif /* LIBRARIES_HPP_ */
