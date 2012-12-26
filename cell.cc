/*
 * cell.cpp
 *
 *  Created on: Dec 23, 2012
 *      Author: anders
 */
#include <stdlib.h>
#include <vector>
#include "cell.h"

using namespace std;

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

int Cell::neighbours(std::vector<Cell> cells){
  int noNeigbours = 0;
  
  for(auto cell: cells){
    if (neighbour(cell)){
      noNeigbours++;
    }
  }
  return noNeigbours;
}


