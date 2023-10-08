//
// Created by lixinzhuang1 on 2023/9/28.
//

#include "binary_search.h"

/*
 * 二分查找 双闭区间
 */
int binarySearch(std::vector<int> &nums, int target) {
    int i = 0, j = nums.size() - 1;
    // 搜索空间为空 i > j 时
    while (i <= j) {
        int m = i + (j - i) / 2;
        if(nums[m] < target) {
            i = m + 1;
        } else if(nums[m] > target) {
            j = m - 1;
        } else {
            return m;
        }
    }
    return -1;
}