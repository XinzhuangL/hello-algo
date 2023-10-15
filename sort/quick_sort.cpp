//
// Created by lixinzhuang1 on 2023/10/15.
//

#include "quick_sort.h"



void swap(std::vector<int> &nums, int i, int j) {
    int tmp = nums[i];
    nums[i] = nums[j];
    nums[j] = tmp;
}

int partition(std::vector<int> &nums, int left, int right) {
    // nums[left] 作为基准数
    int i = left, j = right;
    while (i < j) {
        while (i < j && nums[j] >= nums[left]) j--;
        while (i < j && nums[i] <= nums[left]) i++;
        swap(nums, i, j);
    }
    // 将基准数交换到交界处
    swap(nums, i, left);
    return i;
}

/* 快速排序 */
void quickSort(std::vector<int> &nums, int left, int right) {
    // 子数组长度为1时终止递归
    if(left >= right)
        return;
    // 哨兵划分
    int pivot = partition(nums, left, right);
    quickSort(nums, left, pivot - 1);
    quickSort(nums, pivot + 1, right);
}
