//
// Created by lixinzhuang1 on 2023/10/15.
//

#include "quick_sort.h"
#include "gtest/gtest.h"


TEST(QuickSort, quickSort) {
    std::vector<int> nums = {1, 4, 3, 1, 5, 2};
    std::vector<int> targetNums = {1, 1, 2, 3, 4, 5};
    quickSort(nums, 0, nums.size());
    for(int i = 0; i < nums.size(); i++) {
        ASSERT_EQ(nums[i], targetNums[i]);
    }
}

