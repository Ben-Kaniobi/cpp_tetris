/*
 * TetrominoO.hpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

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
