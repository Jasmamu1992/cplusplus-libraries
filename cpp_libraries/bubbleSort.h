#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <iostream>

namespace jlib {
template<typename iterator>
void bubbleSort(iterator begin, iterator end){
    bool change = true;
    while(change){
        change = false;
        for(iterator it=begin; it!=end-1; ++it){
            if(*(it)>*(it+1)){
                std::swap(*it, *(it+1));
                change = true;
            }
        }
    }
}
}

#endif // BUBBLESORT_H
