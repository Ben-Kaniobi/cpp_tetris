/******************************************************************************/
/*! \file TetrominoI.hpp
 ******************************************************************************
 *  \author    kasen1
 *  \author    plats1
 *
 *  \version   0.1.0
 *
 *  \date      2014-04-28  v0.0.1  File created
 *  \date      2014-06-11  v0.1.0  Implemented all but class map and class line
 ******************************************************************************/

#ifndef TETROMINOI_HPP_
#define TETROMINOI_HPP_

#include "Libraries.hpp"
#include "Tetromino16.hpp"

class TetrominoI: public Tetromino16 {
private:
	static const ColorType color;

public:
	TetrominoI()
	:Tetromino16(color) {};
	tetrominoType getType() {return typeTetrominoI;};
};

#endif /* TETROMINOI_HPP_ */
