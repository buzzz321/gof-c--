/*
 * board.cc
 *
 *  Created on: Dec 23, 2012
 *      Author: anders
 */

#include "board.h"
#include <iostream>
using namespace std;
/*

1. Any live cell with fewer than two live neighbours dies, as if caused by under-population.
2. Any live cell with two or three live neighbours lives on to the next generation.
3. Any live cell with more than three live neighbours dies, as if by overcrowding.
4. Any dead cell with exactly three live neighbours becomes a live cell, as if by reproduction.
 * */

Board::Board(std::vector<Cell> seed):cells_current_gen(seed) {	

}

Board::~Board() {

}

std::vector< Cell > Board::rule1(){
 for (Cell &cell : cells_current_gen){
   if(cell.neighbours(cells_current_gen) < 2){
     dead_cells.push_back(cell);
   }
 }
 return dead_cells;
}

std::vector< Cell > Board::rule2(){
    std::vector<Cell> retVal;
    for (Cell &cell : cells_current_gen){
    int neibours = cell.neighbours(cells_current_gen);
    if(neibours == 2 || neibours == 3){
     retVal.push_back(cell);
   }
  }
  return retVal;
}

std::vector< Cell > Board::rule3(){
 for (Cell &cell : cells_current_gen){  
   if(cell.neighbours(cells_current_gen) > 3){
     dead_cells.push_back(cell);
   }
 }
 return dead_cells;
}

std::vector< Cell > Board::rule4(const std::vector<Cell> &candidates, const std::vector<Cell> & living_cells){
  vector<Cell> resurection;
  
  for( Cell candidate: candidates ){
    if (candidate.neighbours(living_cells) == 3){
      resurection.push_back(candidate);
    }
  }  
  return resurection;
}
