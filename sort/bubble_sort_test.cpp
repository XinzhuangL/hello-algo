//
// Created by lixinzhuang1 on 2023/10/15.
//

#include "bubble_sort.h"
#include "gtest/gtest.h"


TEST(BubbleSort, sortTest) {
    std::vector<int> nums = {4, 1, 3, 1, 5, 2};
    std::vector<int> orderNums = {1, 1, 2, 3, 4, 5};
    bubbleSort(nums);

    for(int i = 0; i < nums.size(); i++) {
        ASSERT_EQ(nums[i], orderNums[i]);
    }
}

