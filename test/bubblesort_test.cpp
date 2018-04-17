#include <gtest/gtest.h>
#include <vector>
#include <algorithm>
#include "bubbleSort.h"
#include <stdlib.h>

TEST(BUBBLESORT, SELECTIONSORT_TWO_UNSORTED_ELEMENTS_TRUE_Test) {
    std::vector<int> input1{5, 2};
    std::vector<int> input2{5, 2};
    std::sort(input1.begin(), input1.end());
    jlib::bubbleSort(input2.begin(), input2.end());
    ASSERT_TRUE(std::equal(input1.begin(), input1.end(), input2.begin()));
}