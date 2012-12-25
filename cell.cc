/*
 * cell.cpp
 *
 *  Created on: Dec 23, 2012
 *      Author: anders
 */
#include <stdlib.h>
#include "cell.h"

Cell::Cell(int x, int y):x(x),y(y) {
	// TODO Auto-generated constructor stub

}

Cell::~Cell() {
	// TODO Auto-generated destructor stub
}


bool Cell::neighbour(const Cell& cell) const
{
  return abs(x-cell.getX())<= 1 && abs(y-cell.getY()) <= 1;
}


