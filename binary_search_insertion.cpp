//
// Created by lixinzhuang1 on 2023/10/8.
//

#include "binary_search_insertion.h"

/*
 * 存在重复元素 1,3,6,6,6,6,12,15,23,26,31,35
 *  循环结束后，指向最左边的 target ，指向首个小于 target 的元素
 */
int binarySearchInsertion(std::vector<int> &nums, int target) {
    int i = 0, j = nums.size() - 1;
    while (i <= j) {
        int m = i + (j - i) / 2;
        if(nums[m] > target) {
            j = m - 1;
        } else if(nums[m] < target) {
            i = m + 1;
        } else {
            j = m - 1;
        }
    }
    return i;
}