#include <iostream>
#include "list.h"

using namespace std;
int main(){
    jlib::list<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.push_front(0);
    cout << list << endl;
    cout << "size " << list.size() << endl;
    list.pop_back();
    list.pop_front();
    cout << list << endl;
    cout << "size " << list.size() << endl;
//    jlib::list<int>::iterator it;
    jlib::list<int>::const_iterator it;
    cout<< *(list.begin()) << endl;
    cout << "are they equal  " << (it!=list.cbegin()) << endl;
    it = list.cbegin();
    cout << *it << endl;
    for(it=list.cbegin();it!=list.cend();++it){
        cout << *it << " ";
    }
    cout << endl;
    for(auto &a:list){
        cout << a << " ";
    }
    cout << endl;
    return 0;
}
