/*
 * Tetromino4.hpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#ifndef TETROMINO4_HPP_
#define TETROMINO4_HPP_

#include "Tetromino.hpp"
#include "Block.hpp"

class Tetromino4: public Tetromino {
protected:
	/* Attributes */
	static const Point2D startPos;
	Square *pSquares[2][2];

	/* Constructor protected for abstract class */
	Tetromino4(ColorType Color);

public:
	/* Destructor has to be virtual */
	virtual ~Tetromino4() {};
	/* Dir: true = cw, false = ccw */
	void rotate(bool Cw);
};

#endif /* TETROMINO4_HPP_ */
