//
// Created by lixinzhuang1 on 2023/10/18.
//

#include "my_heap.h"

std::vector<int> maxHeap;

void MaxHeap(std::vector<int> nums) {
    maxHeap = nums;
    // 堆化除叶节点以外的其他所有节点
    for(int i = parent(size() - 1); i >= 0; i--) {
        siftDown(i);
    }
}
int size() {
    return maxHeap.size();
}

bool isEmpty() {
    return maxHeap.empty();
}

int left(int i) {
    return 2 * i + 1;
}

int right(int i) {
    return 2 * i + 2;
}

int parent(int i) {
    return (i - 1) / 2;
}

int peek() {
    return maxHeap[0];
}

void push(int val) {
    maxHeap.push_back(val);
    siftUp(size() - 1);
}

void siftUp(int i) {
    while (true) {
        int p = parent(i);
        if(p < 0 || maxHeap[i] <= maxHeap[p])
            break;
        std::swap(maxHeap[i], maxHeap[p]);
        // 循环向上堆化
        i = p;
    }
}

int pop() {
    if(isEmpty()) {
        throw std::out_of_range("堆为空");
    }
    int num = maxHeap[0];
    // 交换根节点和最后一个元素
    std::swap(maxHeap[0], maxHeap[size() - 1]);
    // 删除节点
    maxHeap.pop_back();
    // 从顶堆化
    siftDown(0);
    return num;
}

//  与子节点中大的子交换
void siftDown(int i) {
    while (true) {
        // 判断节点 i, l, r 中值最大的节点，记为 ma
        int l = left(i), r = right(i), ma = i;
        if (l < size() && maxHeap[l] > maxHeap[ma])
            ma = l;
        if (r < size() && maxHeap[r] > maxHeap[ma])
            ma = r;
        // 若节点 i 最大或索引 l, r 越界，则无须继续堆化，跳出
        if (ma == i)
            break;
        std::swap(maxHeap[i], maxHeap[ma]);
        // 循环向下堆化
        i = ma;
    }
}

