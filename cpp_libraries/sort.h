#ifndef JSORT_H
#define JSORT_H

#include <vector>

namespace jlib{

template<typename RandomIt, typename Compare>
void merge(RandomIt first, RandomIt mid, RandomIt last, Compare comp,
           typename std::vector<typename std::iterator_traits<RandomIt>::value_type>::iterator copy_iterator){
    auto first_t = first;
    auto mid_t = mid;
    auto copyIt = copy_iterator;
    while(first_t < mid && mid_t < last){
        *(copyIt++) = comp(*first_t, *mid_t)? *(first_t++) : *(mid_t++);
    }
    copyIt = std::move(first_t, mid, copyIt);
    copyIt = std::move(mid_t, last, copyIt);
    std::move(copy_iterator, copyIt, first);
}

template<typename RandomIt, typename Compare>
void merge_sort(RandomIt first, RandomIt last, Compare comp,
                typename std::vector<typename std::iterator_traits<RandomIt>::value_type>::iterator copy_iterator){
    const size_t size = std::distance(first, last);
    if (size <= 1) return;
    auto mid = first;
    std::advance(mid, size/2);

    merge_sort(first, mid, comp, copy_iterator);
    merge_sort(mid, last, comp, copy_iterator);

    merge(first, mid, last, comp, copy_iterator);
}


template <typename RandomIt, typename Compare>
void merge_sort(RandomIt first, RandomIt last, Compare comp){
    std::vector<typename std::iterator_traits<RandomIt>::value_type> input_copy(std::distance(first, last));
    merge_sort(first, last, comp, input_copy.begin());
}


template <typename RandomIt>
void merge_sort(RandomIt first, RandomIt last){
    merge_sort(first, last, std::less<typename std::iterator_traits<RandomIt>::value_type>());
}

}

#endif
