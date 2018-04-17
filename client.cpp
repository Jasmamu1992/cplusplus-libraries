#include <iostream>
#include <string>
#include <vector>
#include "bubbleSort.h"

using namespace std;
template<typename T>
void print_vector(std::vector<T>& input) {
    for(auto elem: input) std::cout<<elem<<" ";
    std::cout<<std::endl;
}

int main(){
    cout<<"jeshwanth"<<endl;
    std::vector<int> input1{5, 2};
    jlib::bubbleSort(input1.begin(), input1.end());
    print_vector(input1);
    return 0;
}
