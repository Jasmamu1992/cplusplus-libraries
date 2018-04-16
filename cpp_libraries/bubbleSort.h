#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <iostream>

namespace jlib {
template<typename T>
void swap(T& x, T& y){
    T temp = x;
    x = y;
    y = temp;
}

template<typename T>
void bubbleSort(T array[], unsigned int len){
    if(len<2){
        return;
    }
    bool change = true;
    while(change){
        change = false;
        for(unsigned int i=0; i<len-1; ++i){
            change = false;
            if(array[i]>array[i+1]){
                swap(array[i],array[i+1]);
                change = true;
            }
        }
    }
}
}

#endif // BUBBLESORT_H
