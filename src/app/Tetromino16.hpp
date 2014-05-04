/*
 * Tetromino16.hpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#ifndef TETROMINO16_HPP_
#define TETROMINO16_HPP_

#include "Libraries.hpp"
#include "Tetromino.hpp"

class Tetromino16: public Tetromino {
private:
	/* Attributes */
	static const Point2D startPos;
	static const unsigned int sideNum = 4;
	/* Pointer array to avoid splicing */
	Square *pSquares[sideNum][sideNum];

protected:
	/* Constructor protected for abstract class */
	Tetromino16(ColorType Color);

public:
	/* Pure virtual method to make class abstract */
	virtual tetrominoType getType() = 0;
	/* Destructor has to be virtual */
	virtual ~Tetromino16();
	/* Dir: true = cw, false = ccw */
	virtual void rotate(bool Cw);
	void draw();
};

#endif /* TETROMINO16_HPP_ */
