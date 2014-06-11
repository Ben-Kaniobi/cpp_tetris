/******************************************************************************/
/*! \file TetrominoO.hpp
 ******************************************************************************
 *  \author    kasen1
 *  \author    plats1
 *
 *  \version   0.1.0
 *
 *  \date      2014-04-28  v0.0.1  File created
 *  \date      2014-06-11  v0.1.0  Implemented all but class map and class line
 ******************************************************************************/

#ifndef TETROMINOO_HPP_
#define TETROMINOO_HPP_

#include "Libraries.hpp"
#include "Tetromino4.hpp"

class TetrominoO: public Tetromino4 {
private:
	static const ColorType color;

public:
	TetrominoO()
	:Tetromino4(color) {};
	tetrominoType getType() {return typeTetrominoO;};
};

#endif /* TETROMINOO_HPP_ */
