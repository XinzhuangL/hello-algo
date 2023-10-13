//
// Created by lixinzhuang1 on 2023/10/12.
//

#include "binary_search_left_edge.h"
#include "gtest/gtest.h"


// 1,3,6,6,6,6,12,15,23,26,31,35
// 查找6
TEST(BinarySearchLeftEdge, mayInVector) {
    std::vector<int> numbers = {1,3,6,6,6,6,12,15,23,26,31,35};
    int targetNum1 = 6;
    int targetIdx1 = binarySearchLeftEdge(numbers, targetNum1);
    ASSERT_EQ(targetIdx1, 2);

    int targetNum2 = 0;
    int targetIdx2 = binarySearchLeftEdge(numbers, targetNum2);
    ASSERT_EQ(targetIdx2, -1);

    int targetNum3 = 40;
    int targetIdx3 = binarySearchLeftEdge(numbers, targetNum3);
    ASSERT_EQ(targetIdx3, -1);
}


