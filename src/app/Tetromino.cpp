/******************************************************************************/
/*! \file Tetromino.cpp
 ******************************************************************************
 *  \author    kasen1
 *  \author    plats1
 *
 *  \version   0.1.0
 *
 *  \date      2014-04-28  v0.0.1  File created
 *  \date      2014-06-11  v0.1.0  Implemented all but class map and class line
 ******************************************************************************/

#include "Tetromino.hpp"

Tetromino::Tetromino(Point2D Position) {
	/* Set start position */
	this->position.x = Position.x;
	this->position.y = Position.y;
	/* Set start rotition */
	this->rotation = rotZero;
}

void Tetromino::move(Point2D Dir) {
	/* TODO: Check if tetromino at new position isfree */

	this->position.x += Dir.x;
	this->position.y += Dir.y;
}

void Tetromino::rotate(bool Cw) {
	/* Set new enum value in a switch to avoid casting invalid values */
	Rotation new_rot;
	if(Cw) {
		/* Rotate clock wise */
		switch(this->rotation) {
		case rotZero:       new_rot = rotNinety;     break;
		case rotNinety:     new_rot = rotOneeighty;  break;
		case rotOneeighty:  new_rot = rotTwoseventy; break;
		case rotTwoseventy: new_rot = rotZero;       break;
		default:            /* Invalid value */      break;
		}
	}
	else {
		/* Rotate coutner clock wise */
		switch(this->rotation) {
		case rotTwoseventy: new_rot = rotOneeighty;  break;
		case rotOneeighty:  new_rot = rotNinety;     break;
		case rotNinety:     new_rot = rotZero;       break;
		case rotZero:       new_rot = rotTwoseventy; break;
		default:            /* Invalid value */      break;
		}
	}
	this->rotation = new_rot;
}
