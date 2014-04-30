/*
 * Tetromino4.hpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#ifndef TETROMINO4_HPP_
#define TETROMINO4_HPP_

#include <boost/ptr_container/ptr_list.hpp>
#include "Tetromino.hpp"
#include "Block.hpp"

class Tetromino4: public Tetromino {
protected:
	/* Attributes */
	static const Point2D startPos;
	/* Pointer list to avoid splicing */
//	std::list<Square*> pSquares;
	boost::ptr_list<Square> squares;

	/* Constructor protected for abstract class */
	Tetromino4(ColorType Color);

public:
	/* Destructor has to be virtual */
	virtual ~Tetromino4();
	/* Dir: true = cw, false = ccw */
	void rotate(bool Cw);
};

#endif /* TETROMINO4_HPP_ */
