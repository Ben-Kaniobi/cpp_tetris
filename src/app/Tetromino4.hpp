/*
 * Tetromino4.hpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#ifndef TETROMINO4_HPP_
#define TETROMINO4_HPP_

#include <boost/ptr_container/ptr_vector.hpp>
#include "Tetromino.hpp"
#include "Block.hpp"

class Tetromino4: public Tetromino {
protected:
	/* Attributes */
	static const Point2D startPos;
	/* Pointer list to avoid splicing */
	boost::ptr_vector<Square> squares;

	/* Constructor protected for abstract class */
	Tetromino4(ColorType Color);

public:
	/* Pure virtual method to make class abstract */
	virtual tetrominoType getType() = 0;
	/* Destructor has to be virtual */
	virtual ~Tetromino4();
	/* Dir: true = cw, false = ccw */
	void rotate(bool Cw);
	void draw();
};

#endif /* TETROMINO4_HPP_ */
