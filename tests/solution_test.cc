#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

//input 0
TEST(Test0, Test0) {
  Solution solution;

  vector<int> input0 = {5,9,3,1,7};
  // 1 3 5 7 9
  int k0 = 2;

  int result0 = 7;
 
  EXPECT_EQ(solution.KthLarge(input0, k0), result0);
}

//input 1
TEST(Test1, Test1) {
  Solution solution;

  vector<int> input1 = {5,9,3,1,7};
  // 1 3 5 7 9
  int k1 = 3;

  int result1 = 5;
 
  EXPECT_EQ(solution.KthLarge(input1, k1), result1);
}

//input 2
TEST(Test2, Test2) {
  Solution solution;

  vector<int> input2 = {5,9,3,1,7};
  // 1 3 5 7 9
  int k2 = 4;

  int result2 = 3;
 
  EXPECT_EQ(solution.KthLarge(input2, k2), result2);
}

//input 3
TEST(Test3, Test3) {
  Solution solution;

  vector<int> input3 = {5,9,3,1,7};
  // 1 3 5 7 9
  int k3 = 0;

  int result3 = 0;
 
  EXPECT_EQ(solution.KthLarge(input3, k3), result3);
}

