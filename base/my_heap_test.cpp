//
// Created by lixinzhuang1 on 2023/10/18.
//

#include "gtest/gtest.h"
#include "my_heap.h"

// 9 8 7 6 2 1 4 3 6 2 5
// 9 8 7 6 6 5 4 3 2 2 1
TEST(MyHeapTest, pushAndPop) {
    std::vector<int> nums = {9, 8, 7, 6, 2, 1, 4, 3, 6, 2, 5};
    std::vector<int> orderNums = {9, 8, 7, 6, 6, 5, 4, 3, 2, 2, 1};
    for(int i = 0; i < nums.size(); i++) {
        push(nums[i]);
    }

    for(int i = 0; i < orderNums.size(); i++) {
        int num = pop();
        ASSERT_EQ(orderNums[i], num);
    }



}



TEST(MyHeapTest, popOutOfRange) {

}