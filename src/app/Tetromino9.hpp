/******************************************************************************/
/*! \file Tetromino9.hpp
 ******************************************************************************
 *  \author    kasen1
 *  \author    plats1
 *
 *  \version   0.1.0
 *
 *  \date      2014-04-28  v0.0.1  File created
 *  \date      2014-06-11  v0.1.0  Implemented all but class map and class line
 ******************************************************************************/

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
