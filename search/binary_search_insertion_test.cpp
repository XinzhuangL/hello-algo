//
// Created by lixinzhuang1 on 2023/10/8.
//

/**
 * 二分查找插入点，有重复元素
 * 1,3,6,6,6,6,12,15,23,26,31,35
 * 插入6
 */

#include "gtest/gtest.h"
#include "binary_search_insertion.h"

TEST(BinarySearchInsert, inVector) {
    std::vector<int> numbers = {1,3,6,6,6,6,12,15,23,26,31,35};
    int targetNum = 6;
    int targetIdx = binarySearchInsertion(numbers, targetNum);
    ASSERT_EQ(targetIdx, 2);
}
