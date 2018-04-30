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
    jlib::list<int>::iterator it;
    cout<< *(list.begin()) << endl;
    cout<< *(list.end()) << endl;
    cout << "are they equal  " << (it!=list.begin()) << endl;
    for(it=list.begin();it!=list.end();++it){
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
