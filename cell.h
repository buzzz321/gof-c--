/*
 * cell.h
 *
 *  Created on: Dec 23, 2012
 *      Author: anders
 */
#include <vector>

#ifndef CELL_H_
#define CELL_H_


class Cell {
public:
	explicit Cell(int x, int y);
	virtual ~Cell();
    bool neighbour(const Cell &cell) const;
	int getX() const{return x;};
	int getY() const{return y;};
    int neighbours(std::vector<Cell> cells);
private:
  int x;
  int y;
};

#endif /* CELL_H_ */
