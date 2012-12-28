/*
 * board.h
 *
 *  Created on: Dec 23, 2012
 *      Author: anders
 */
#include <vector>
#include "cell.h"

#ifndef BOARD_H_
#define BOARD_H_

class Board {
public:
	explicit Board(std::vector<Cell> seed);
	virtual ~Board();

    std::vector<Cell> rule1();
    std::vector<Cell> rule3();
private:
  std::vector<Cell> cells_current_gen;
  std::vector<Cell> dead_cells;
};

#endif /* BOARD_H_ */
