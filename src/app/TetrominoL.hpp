/*
 * TetrominoL.hpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#ifndef TETROMINOL_HPP_
#define TETROMINOL_HPP_

#include "Libraries.hpp"
#include "Tetromino9.hpp"

class TetrominoL: public Tetromino9 {
private:
	static const ColorType color;

public:
	TetrominoL()
	:Tetromino9(color) {};
};

#endif /* TETROMINOL_HPP_ */
