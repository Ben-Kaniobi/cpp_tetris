/*
 * Tetromino.hpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#ifndef TETROMINO_HPP_
#define TETROMINO_HPP_

#include "Libraries.hpp"

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
	/* Destructor has to be virtual */
	virtual ~Tetromino() {};
	void move(Point2D Dir);
	void rotate(bool Cw);
};

#endif /* TETROMINO_HPP_ */
