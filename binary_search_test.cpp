
#include "gtest/gtest.h"
#include "binary_search.h"

TEST(BinarySearch, inVector) {
    std::vector<int> numbers = {1, 2, 5, 6, 9};
    int targetNum = 6;
    int targetIdx = binarySearch(numbers, targetNum);
    ASSERT_EQ(targetIdx, 3);
}

TEST(BinarySearch, outVector) {
    std::vector<int> number = {1, 2, 5, 6, 9};
    int targetNum = 4;
    int targetIdx = binarySearch(number, targetNum);
    ASSERT_EQ(targetIdx, -1);
}