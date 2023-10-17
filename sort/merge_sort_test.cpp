//
// Created by lixinzhuang1 on 2023/10/17.
//

#include "merge_sort.h"
#include "gtest/gtest.h"

TEST(MergeSortTest, SimpleTest) {
    std::vector<int> nums = {7, 3, 2, 6, 0, 1, 5, 4};
    std::vector<int> orderedNums = {0, 1, 2, 3, 4, 5, 6, 7};
    mergeSort(nums, 0, nums.size() - 1);
    for(int i = 0; i < nums.size(); i++) {
        ASSERT_EQ(nums[i], orderedNums[i]);
    }
}
