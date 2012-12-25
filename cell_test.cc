#include "gtest/gtest.h"
#include "cell.h"

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
