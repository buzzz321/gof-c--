#include "gtest/gtest.h"
#include "cell.h"
#include <vector>

using namespace std;

TEST(cell_test_case, hello_test)
{
	EXPECT_EQ(1, 1);
}

TEST(cell_test_case, test_neighbour){
  Cell uat(1,0);
  
  EXPECT_EQ(true, uat.neighbour(Cell(0,1))); 
}

TEST(cell_test_case, test_not_a_neighbour){
  Cell uat(1,0);

  EXPECT_EQ(false, uat.neighbour(Cell(10,1)));
}

TEST(cell_test_case, test_two_neighbours){
  vector<Cell> data;
  data.push_back(Cell(10,1));
  data.push_back(Cell(1,1));
  data.push_back(Cell(0,1));
  Cell uat(0,0);

  EXPECT_EQ(2,uat.neighbours(data));
}

TEST(cell_test_case, test_zero_neighbours){
  vector<Cell> data;
  data.push_back(Cell(10,1));
  data.push_back(Cell(11,1));
  data.push_back(Cell(12,1));
  Cell uat(0,0);

  EXPECT_EQ(0,uat.neighbours(data));
}
