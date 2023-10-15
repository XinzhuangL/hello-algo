//
// Created by lixinzhuang1 on 2023/10/15.
//

#include "bubble_sort.h"

void bubbleSort(std::vector<int> &nums) {
    int size = nums.size();
    for(int i = size - 1; i >= 0; i--) {
        for(int j = 0; j < i; j++) {
            if(nums[j] > nums[j + 1]) {
                std::swap(nums[j], nums[j + 1]);
            }
        }
    }
}


void bubbleSortFlag(std::vector<int> &nums) {
    int size = nums.size();
    bool flag = false;
    for(int i = size - 1; i >= 0; i--) {
        flag = false;
        for(int j = 0; j < i; j++) {
            if(nums[j] > nums[j + 1]) {
                flag = true;
                std::swap(nums[j], nums[j + 1]);
            }
        }
        if(!flag) {
            return;
        }
    }
}

