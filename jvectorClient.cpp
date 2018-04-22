#include <iostream>
#include "vector.h"

using namespace std;

int main(){
    cout<<"jeshwanth"<<endl;
    jlib::vector<int> vec;
    vec.push_back(3);
    cout<<vec.back()<<endl;
    vec.push_back(4);
    cout<<vec.back()<<endl;
    vec.push_back(5);
    cout<<vec.back()<<endl;
    vec.push_back(6);
    vec.pop_back();
    vec.pop_back();
    cout<<vec.back()<<endl;
    cout << vec;
    cout << vec[0]<<endl;
    cout << *vec.begin() << endl;
    cout << *vec.end() << endl;
    return 0;
}
