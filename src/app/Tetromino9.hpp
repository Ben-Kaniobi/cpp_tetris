/*
 * Tetromino9.hpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#ifndef TETROMINO9_HPP_
#define TETROMINO9_HPP_

#include "Libraries.hpp"
#include "Tetromino.hpp"

class Tetromino9: public Tetromino {
private:
	/* Attributes */
	static const Point2D startPos;
	static const unsigned int sideNum = 3;
	/* Pointer array to avoid splicing */
	Square *pSquares[sideNum][sideNum];

protected:
	/* Constructor protected for abstract class */
	Tetromino9(ColorType Color, tetrominoType Type);

public:
	/* Pure virtual method to make class abstract */
	virtual tetrominoType getType() = 0;
	/* Destructor has to be virtual */
	virtual ~Tetromino9();
	/* Dir: true = cw, false = ccw */
	virtual void rotate(bool Cw);
	void draw();
};

#endif /* TETROMINO9_HPP_ */
