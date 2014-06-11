/******************************************************************************/
/*! \file TetrominoL.hpp
 ******************************************************************************
 *  \author    kasen1
 *  \author    plats1
 *
 *  \version   0.1.0
 *
 *  \date      2014-04-28  v0.0.1  File created
 *  \date      2014-06-11  v0.1.0  Implemented all but class map and class line
 ******************************************************************************/

#ifndef TETROMINOL_HPP_
#define TETROMINOL_HPP_

#include "Libraries.hpp"
#include "Tetromino9.hpp"

class TetrominoL: public Tetromino9 {
private:
	static const ColorType color;

public:
	TetrominoL()
	:Tetromino9(color, typeTetrominoL) {};
	tetrominoType getType() {return typeTetrominoL;};
};

#endif /* TETROMINOL_HPP_ */
