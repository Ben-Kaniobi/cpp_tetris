/******************************************************************************/
/*! \file TetrominoS.hpp
 ******************************************************************************
 *  \author    kasen1
 *  \author    plats1
 *
 *  \version   0.1.0
 *
 *  \date      2014-04-28  v0.0.1  File created
 *  \date      2014-06-11  v0.1.0  Implemented all but class map and class line
 ******************************************************************************/

#ifndef TETROMINOS_HPP_
#define TETROMINOS_HPP_

#include "Libraries.hpp"
#include "Tetromino9.hpp"

class TetrominoS: public Tetromino9 {
private:
	static const ColorType color;

public:
	TetrominoS()
	:Tetromino9(color, typeTetrominoS) {};
	tetrominoType getType() {return typeTetrominoS;};
};

#endif /* TETROMINOS_HPP_ */
