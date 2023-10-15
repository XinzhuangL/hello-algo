//
// Created by lixinzhuang1 on 2023/10/13.
//

#include "select_sort.h"


void selectionSort(std::vector<int> &nums) {
    int n = nums.size();
    for(int i = 0; i < n; i++) {
        int k = i;
        for(int j = i + 1; j < n; j++) {
            if(nums[k] > nums[j]) {
                k = j;
            }
        }
        std::swap(nums[i], nums[k]);
    }
}
