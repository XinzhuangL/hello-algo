//
// Created by 李新壮 on 2023/10/30.
//

#include "heap_sort.h"


void shiftDown(std::vector<int> &nums, int n, int i) {
    while (true) {
        // 取最大节点
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        int ma = i;
        if(l < n && nums[l] > nums[ma])
            ma = l;
        if(r < n && nums[r] > nums[ma])
            ma = r;
        if(ma == i) {
            break;
        }
        // 交换2 节点
        std::swap(nums[i], nums[ma]);
        i = ma;
    }
}

void heapSort(std::vector<int> &nums) {
    // 除叶节点之外的所有节点
    for(int i = nums.size() / 2 - 1; i >= 0; --i) {
        shiftDown(nums, nums.size(), i);
    }

    // 从堆中取最大元素， 循环n -1 轮
    for(int i = nums.size() - 1; i > 0; --i) {
        // 交换叶节点与最右叶节点
        std::swap(nums[0], nums[i]);
        // 以根节点为起点，从顶至底进行堆化
        shiftDown(nums, i, 0);
    }
}


