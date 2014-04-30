/*
 * Tetromino16.hpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#ifndef TETROMINO16_HPP_
#define TETROMINO16_HPP_

#include <boost/ptr_container/ptr_vector.hpp>
#include "Libraries.hpp"
#include "Tetromino.hpp"

class Tetromino16: public Tetromino {
protected:
	/* Attributes */
	static const Point2D startPos;
	//static const unsigned int sideNum;
	/* Pointer list to avoid splicing */
	boost::ptr_vector<Square> squares;

	/* Constructor protected for abstract class */
	Tetromino16(ColorType Color);

public:
	/* Pure virtual method to make class abstract */
	virtual tetrominoType getType() = 0;
	/* Destructor has to be virtual */
	virtual ~Tetromino16() {};
	/* Dir: true = cw, false = ccw */
	void rotate(bool Cw);
	void draw();
};

#endif /* TETROMINO16_HPP_ */
