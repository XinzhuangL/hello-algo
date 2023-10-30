//
// Created by lixinzhuang1 on 2023/10/15.
//

#include "bucket_sort.h"
#include "gtest/gtest.h"


TEST(bucket, sortTest) {
    std::vector<float> nums = {0.49, 0.96, 0.82, 0.09, 0.57, 0.43, 0.91, 0.75, 0.15, 0.37};
    std::vector<float> orderNums = {1, 1, 2, 3, 4, 5};
    bucketSort(nums);

    for(int i = 0; i < nums.size(); i++) {
        ASSERT_EQ(nums[i], orderNums[i]);
    }
}

