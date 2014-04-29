/*
 * TetrominoS.hpp
 *
 *  Created on: 28.04.2014
 *      Author: nicola
 */

#ifndef TETROMINOS_HPP_
#define TETROMINOS_HPP_

#include "Libraries.hpp"
#include "Tetromino9.hpp"

class TetrominoS: public Tetromino9 {
private:
	static const ColorType color;

public:
	TetrominoS()
	:Tetromino9(color) {};
};

#endif /* TETROMINOS_HPP_ */
