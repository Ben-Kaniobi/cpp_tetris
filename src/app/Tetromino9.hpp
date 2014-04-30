/*
 * Tetromino9.hpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#ifndef TETROMINO9_HPP_
#define TETROMINO9_HPP_

#include <boost/ptr_container/ptr_vector.hpp>
#include "Tetromino.hpp"
#include "Block.hpp"
#include "Space.hpp"

class Tetromino9: public Tetromino {
protected:
	/* Attributes */
	static const Point2D startPos;
	/* Pointer list to avoid splicing */
	boost::ptr_vector<Square> squares;

	/* Constructor protected for abstract class */
	Tetromino9(ColorType Color);

public:
	/* Pure virtual method to make class abstract */
	virtual tetrominoType getType() = 0;
	/* Destructor has to be virtual */
	virtual ~Tetromino9() {};
	/* Dir: true = cw, false = ccw */
	void rotate(bool Cw);
	void draw();
};

#endif /* TETROMINO9_HPP_ */
