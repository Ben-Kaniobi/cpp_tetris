/******************************************************************************/
/*! \file Libraries.cpp
 ******************************************************************************
 *  \author    kasen1
 *  \author    plats1
 *
 *  \version   0.1.0
 *
 *  \date      2014-04-28  v0.0.1  File created
 *  \date      2014-06-11  v0.1.0  Implemented all but class map and class line
 ******************************************************************************/

#include "Libraries.hpp"

/* Global variables */
/* Colors */
const ColorType ColBlack   = {0x00, 0x00, 0x00, 0xFF};
const ColorType ColOrange  = {0x00, 0x80, 0xFF,  0xFF};
const ColorType ColCyan    = {0xFF, 0xFF, 0x00,  0xFF};
const ColorType ColRed     = {0x00, 0x00, 0xFF,  0xFF};
const ColorType ColYellow  = {0x00, 0xFF, 0xFF,  0xFF};
const ColorType ColMagenta = {0xFF, 0x00, 0xFF,  0xFF};
const ColorType ColGreen   = {0x00, 0xFF, 0x00,  0xFF};
const ColorType ColBlue    = {0xFF, 0x00, 0x00,  0xFF};
/* Directions */
const Point2D DirDown = {0, 1};
const Point2D DirLeft = {-1, 0};
const Point2D DirRight = {1, 0};
