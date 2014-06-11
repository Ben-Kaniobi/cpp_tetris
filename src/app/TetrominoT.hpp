/******************************************************************************/
/*! \file TetrominoT.hpp
 ******************************************************************************
 *  \author    kasen1
 *  \author    plats1
 *
 *  \version   0.1.0
 *
 *  \date      2014-04-28  v0.0.1  File created
 *  \date      2014-06-11  v0.1.0  Implemented all but class map and class line
 ******************************************************************************/

#ifndef TETROMINOT_HPP_
#define TETROMINOT_HPP_

#include "Libraries.hpp"
#include "Tetromino9.hpp"

class TetrominoT: public Tetromino9 {
private:
	static const ColorType color;

public:
	TetrominoT()
	:Tetromino9(color, typeTetrominoT) {};
	tetrominoType getType() {return typeTetrominoT;};
};

#endif /* TETROMINOT_HPP_ */
