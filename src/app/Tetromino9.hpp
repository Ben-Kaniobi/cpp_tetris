/*
 * Tetromino9.hpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#ifndef TETROMINO9_HPP_
#define TETROMINO9_HPP_

#include "Tetromino.hpp"

class Tetromino9: public Tetromino {
protected:
	/* Attributes */
	static const Point2D startPos;

	/* Constructor protected for abstract class */
	Tetromino9(ColorType Color);

public:
	/* Pure virtual method to make class abstract */
	virtual tetrominoType getType() = 0;
	/* Destructor has to be virtual */
	virtual ~Tetromino9() {};
	/* Dir: true = cw, false = ccw */
	void rotate(bool Cw);
	void draw() {}; //TODO
};

#endif /* TETROMINO9_HPP_ */
