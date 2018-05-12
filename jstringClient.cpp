#include <iostream>
#include "jstring.h"
using namespace std;
int main(){
    jlib::string str1 = "Jeshwanth";
    jlib::string str2 = "Challagundla";
    cout << str1 << endl;
    str1 = str2;
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str1.empty() << endl;
    cout << str1.front() << endl;
    cout << str1.back() << endl;
    str1 = "jeshwanth";
    cout << str1 << endl;
    str1 += " challagundla";
    cout << str1 << endl;
    str1 += str2;
    cout << str1 << endl;
    str1 = "jeshwanth";
    str2 = " challagundla";
    cout << str1 + str2 << endl;
    cout << str1 + " challagundla" << endl;
    str1.append(str2);
    cout << str1 << endl;
    str1 = "jeshwanth";
    str2 = " challagundla";
    cout << (str1 == str2) << endl;
    cout << (str1 < str2) << endl;
    cout << (str1 > str2) << endl;
    return 0;
}
