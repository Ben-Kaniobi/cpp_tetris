/******************************************************************************/
/*! \file TetrominoZ.hpp
 ******************************************************************************
 *  \author    kasen1
 *  \author    plats1
 *
 *  \version   0.1.0
 *
 *  \date      2014-04-28  v0.0.1  File created
 *  \date      2014-06-11  v0.1.0  Implemented all but class map and class line
 ******************************************************************************/

#ifndef TETROMINOZ_HPP_
#define TETROMINOZ_HPP_

#include "Libraries.hpp"
#include "Tetromino9.hpp"

class TetrominoZ: public Tetromino9 {
private:
	static const ColorType color;

public:
	TetrominoZ()
	:Tetromino9(color, typeTetrominoZ) {};
	tetrominoType getType() {return typeTetrominoZ;};
};

#endif /* TETROMINOZ_HPP_ */
