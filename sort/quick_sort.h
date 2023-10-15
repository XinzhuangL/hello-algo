//
// Created by lixinzhuang1 on 2023/10/15.
//

#ifndef HELLO_ALGO_QUICK_SORT_H
#define HELLO_ALGO_QUICK_SORT_H
#include <vector>

void swap(std::vector<int> &nums, int i, int j);
int partition(std::vector<int> &nums, int left, int right);
void quickSort(std::vector<int> &nums, int left, int right);

#endif //HELLO_ALGO_QUICK_SORT_H
