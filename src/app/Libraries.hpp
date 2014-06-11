/******************************************************************************/
/*! \file Libraries.hpp
 ******************************************************************************
 *  \author    kasen1
 *  \author    plats1
 *
 *  \version   0.1.0
 *
 *  \date      2014-04-28  v0.0.1  File created
 *  \date      2014-06-11  v0.1.0  Implemented all but class map and class line
 ******************************************************************************/

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
#define MAP_WIDTH           10    /* Number of blocks in x axis */
#define MAP_HEIGHT          20    /* Number of blocks in y axis */
#define SQUARE_WIDTH        30    /* Width * height of one block */
#define WIN_WIDTH           (SQUARE_WIDTH*MAP_WIDTH)
#define WIN_HEIGHT          (SQUARE_WIDTH*MAP_HEIGHT)
#define FONT_SIZE           12    /* pt */
#define FONT_SIZE_GAME_OVER 22    /* pt */

/* Enums */
enum Rotation {rotZero, rotNinety, rotOneeighty, rotTwoseventy};

/* Structs */
struct Point2D {
	int x;
	int y;
};

/* Global variables */
extern const ColorType ColBlack;
extern const ColorType ColOrange;
extern const ColorType ColCyan;
extern const ColorType ColRed;
extern const ColorType ColYellow;
extern const ColorType ColMagenta;
extern const ColorType ColGreen;
extern const ColorType ColBlue;

extern const Point2D DirDown;
extern const Point2D DirLeft;
extern const Point2D DirRight;

#endif /* LIBRARIES_HPP_ */
