/******************************************************************************/
/*! \file Tetromino.hpp
 ******************************************************************************
 *  \author    kasen1
 *  \author    plats1
 *
 *  \version   0.1.0
 *
 *  \date      2014-04-28  v0.0.1  File created
 *  \date      2014-06-11  v0.1.0  Implemented all but class map and class line
 ******************************************************************************/

#ifndef TETROMINO_HPP_
#define TETROMINO_HPP_

#include "Libraries.hpp"
#include "Block.hpp"
#include "Space.hpp"

/* Definitions of sub classes for getType method */
enum tetrominoType {typeTetrominoI, typeTetrominoO, typeTetrominoT, typeTetrominoJ, typeTetrominoL, typeTetrominoS, typeTetrominoZ};

class Tetromino {
protected:
	/* Attributes */
	Point2D position;
	Rotation rotation;

	/* Constructor protected for abstract class */
	Tetromino(Point2D Position);

public:
	/* Pure virtual method to make class abstract */
	virtual tetrominoType getType() = 0;
	virtual void draw() = 0;
	/* Destructor has to be virtual */
	virtual ~Tetromino() {};
	void move(Point2D Dir);
	virtual void rotate(bool Cw);
};

#endif /* TETROMINO_HPP_ */
