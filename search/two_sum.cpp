//
// Created by lixinzhuang1 on 2023/10/13.
//

#include "two_sum.h"
#include <unordered_map>

std::vector<int> twoSumHashTable(std::vector<int> &nums, int target) {
    int size = nums.size();
    // 辅助hash表 时间复杂度 n  k = nums[i]  v = i
    std::unordered_map<int, int> dic;
    // 单层循环 时间复杂的n
    for(int i = 0; i < size; i++) {
        if(dic.find(target - nums[i]) != dic.end()) {
            return {dic[target - nums[i]], i};
        }
        dic.emplace(nums[i], i);
    }
    return {};
}