//
// Created by lixinzhuang1 on 2023/10/13.
//

#include "gtest/gtest.h"
#include "two_sum.h"

TEST(TwoSum, inVector) {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 13;
    std::vector<int> idxPair = twoSumHashTable(nums, target);
    ASSERT_EQ(idxPair.size(), 2);
    ASSERT_EQ(idxPair[0], 0);
    ASSERT_EQ(idxPair[1], 2);
}