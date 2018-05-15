#include <iostream>
#include "sort.h"

using namespace std;

template<typename T>
void printvec(vector<T> a){
    for(auto &i:a){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    vector<int> a = {5, 1, 9, 20};
    jlib::merge_sort(a.begin(), a.end());
    printvec(a);

    vector<double> b= {0.3, 34.2, 11, 8.9};
    jlib::merge_sort(b.begin(), b.end());
    printvec(b);

    vector<string> s = {"jesh", "chall", "jame", "jingir"};
    jlib::merge_sort(s.begin(), s.end());
    printvec(s);

}
