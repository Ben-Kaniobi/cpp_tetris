/*
 * TetrominoZ.hpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#ifndef TETROMINOZ_HPP_
#define TETROMINOZ_HPP_

#include "Libraries.hpp"
#include "Tetromino9.hpp"

class TetrominoZ: public Tetromino9 {
private:
	static const ColorType color;

public:
	TetrominoZ()
	:Tetromino9(color) {};
	tetrominoType getType() {return typeTetrominoZ;};
};

#endif /* TETROMINOZ_HPP_ */
