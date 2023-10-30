//
// Created by 李新壮 on 2023/10/30.
//

#include "bucket_sort.h"


void bucketSort(std::vector<float> &nums) {
    // 初始话k = n / 2 个桶。预期每个桶分配2个元素
    int k = nums.size() / 2;
    std::vector<std::vector<float>> buckets(k);
    // 1. 将元素分配到各个桶中
    for (float  num : nums) {
        // 输入数据范围[0,1), 使用num * k 映射到 [0,k-1]
        int i = num * k;
        // 将num添加进桶bucket_idx
        buckets[i].push_back(num);
    }
    // 2. 对各个桶进行排序
    for(std::vector<float> &bucket : buckets) {
        // 使用内置排序函数，也可以替换成其他排序算法
        std::sort(bucket.begin(), bucket.end());
    }
    // 3. 遍历桶合并结果
    int i = 0;
    for(std::vector<float> &bucket : buckets) {
        for(float  num : bucket) {
            nums[i++] = num;
        }
    }
}