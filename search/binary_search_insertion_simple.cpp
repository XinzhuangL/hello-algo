//
// Created by lixinzhuang1 on 2023/10/8.
//

/**
 * 二分查找插入点，无重复元素
 * 1,3,6,8,12,15,23,26,31,35
 * 插入6
 */
#include <vector>
#include "binary_search_insertion_simple.h"

int binarySearchInsertionSimple(std::vector<int> &nums, int target) {
    int i = 0, j = nums.size() - 1;
    while (i <= j) {
        int idx = i + (j - i) / 2;
        if(nums[idx] == target) {
            return idx;
        } else if(nums[idx] > target) {
            j = idx - 1;
        } else {
            i = idx + 1;
        }
    }
    return i;
}

