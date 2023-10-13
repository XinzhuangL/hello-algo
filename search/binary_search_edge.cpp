//
// Created by lixinzhuang1 on 2023/10/12.
//

#include "binary_search_edge.h"
#include "binary_search_left_edge.h"

int binarySearchRightEdge(std::vector<int> &nums, int target) {
    // 转化为查找最左边的target + 1
    int i = binarySearchInsertion(nums, target + 1);
    // j 指向最右一个target， i 指向首个大于target的元素
    int j = i - 1;
    if(j == -1 || nums[j] != target) {
        return -1;
    }
    return j;
}
