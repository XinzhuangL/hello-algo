//
// Created by lixinzhuang1 on 2023/10/12.
//

#ifndef HELLO_ALGO_BINARY_SEARCH_EDGE_H
#define HELLO_ALGO_BINARY_SEARCH_EDGE_H

#include <vector>

/**
 * 查找最右一个target 即为查找最左一个target + 1
 * 遍历结束后 i指向第一个大于等于target的元素，j指向第一个小于target的元素
 */
int binarySearchRightEdge(std::vector<int> &nums, int target);


#endif //HELLO_ALGO_BINARY_SEARCH_EDGE_H
