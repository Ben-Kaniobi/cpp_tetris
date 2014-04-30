/*
 * TetrominoI.hpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

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
