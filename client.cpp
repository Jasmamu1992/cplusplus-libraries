#include <iostream>
#include <string>
#include "bubbleSort.h"

using namespace std;

template<typename T>
void printArray(T array[], unsigned int len){
    for(unsigned int i=0; i<len; ++i){
        cout<<array[i]<< " ";
    }
    cout<<endl;
}

int main(){
    cout<<"jeshwanth"<<endl;
    double inarray[5] = {1,3,5,2,5};
    jlib::bubbleSort(inarray, 5);
    printArray(inarray, 5);
    double inarray1[10] = {1, 5, 9, 23, 3, 0, 33, -1, 83, 1000032};
    jlib::bubbleSort(inarray1, 10);
    printArray(inarray1, 10);
    double inarray2[] = {1};
    jlib::bubbleSort(inarray2, 1);
    printArray(inarray2, 1);
    double inarray3[] = {};
    jlib::bubbleSort(inarray3, 0);
    printArray(inarray3, 0);
    string inarray4[] = {"jesh", "temp", "apple"};
    jlib::bubbleSort(inarray4, 3);
    printArray(inarray4, 3);
    return 0;
}
