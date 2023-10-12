//
// Created by lixinzhuang1 on 2023/10/12.
//

#include "binary_search_left_edge.h"


int binarySearchLeftEdge(std::vector<int> &nums, int target) {
    // 等价于查找target的插入点
    int i = binarySearchInsertion(nums, target);
    // 越界或不等于 代表没找到
    if(i >= nums.size() || nums[i] != target) {
        return -1;
    }
    return i;
}

