//
// Created by lixinzhuang1 on 2023/10/17.
//

#include "merge_sort.h"

// 合并左右子数组
// 左数组 [left,mid]
// 右数组 [mid+1, right]
void merge(std::vector<int> &nums, int left, int mid, int right) {
    // 初始化辅助数组
    std::vector<int> tmp(nums.begin() + left, nums.begin() + right + 1);
    // 左子数组的起始索引和结束索引
    int leftStart = left - left, leftEnd = mid - left;
    // 右子数组的起始索引和结束索引
    int rightStart = mid + 1 - left, rightEnd = right - left;
    // i, j 分别指向左子数组和右子数组的首元素
    int i = leftStart,j = rightStart;
    for(int k = left; k <= right; k++) {
        // 若左数组已经全部合并完，则选取右子数组元素，并且j++
        if(i > leftEnd)
            nums[k] = tmp[j++];
        // 否则 右子数组已全部合并完活左子数组元素 <= 右子数组元素 则选取左子数组元素，并且i++
        else if(j > rightEnd || tmp[i] <= tmp[j])
            nums[k] = tmp[i++];
        // 否则 若左右子数组都未合并完成并且 左子数组元素 > 右子数组元素，则选取右子数组元素，并且j++
        else
            nums[k] = tmp[j++];
    }
}

/*
 * 归并排序
 */
void mergeSort(std::vector<int> &nums, int left, int right) {
    // 终止条件
    if(left >= right)
        return; //长度1返回
    // 划分阶段
    int mid = (left + right) / 2;
    mergeSort(nums, left, mid);
    mergeSort(nums, mid + 1, right);
    // 合并阶段
    merge(nums, left, mid, right);

}
