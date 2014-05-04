/*
 * TetrominoT.hpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

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
