//
// Created by lixinzhuang1 on 2023/10/18.
//

#ifndef HELLO_ALGO_MY_HEAP_H
#define HELLO_ALGO_MY_HEAP_H
#include <vector>

extern std::vector<int> maxHeap;

bool isEmpty();
int size();
int left(int i);
int right(int i);
int parent(int i);
// 访问堆顶元素
int peek();
// 元素入堆
void push(int val);
// 从节点i开始，从底至顶堆化
void siftUp(int i);
int pop();
void siftDown(int i);


#endif //HELLO_ALGO_MY_HEAP_H
