#ifndef JSTRING_H
#define JSTRING_H

#include <cstring>
#include <ostream>
#include <memory>
#include <iterator>


namespace jlib{
class string{
public:
    const static size_t        MAX_SIZE = 4294967291;
public:
    inline                     string():_str(nullptr), _size(0){}
    inline                     string(const char* other);
                               string(const string& other);
                               string(string&& other) noexcept;
    inline                     ~string(){delete [] _str;}
    inline size_t&             size(){return _size;}
    inline const size_t        size() const {return _size;}
    inline size_t              length(){return _size;}
    inline const size_t        length() const {return _size;}
    const char*                alloc_str(size_t size);
    void                       reset();
    inline bool                empty() const {return !(_size);}
    const char*                copy_str(const char* str);
    inline const char&         front() {return *_str;}
    inline const char&         back()  {return *(_str+size()-1);}
    inline char&               operator[](size_t i) {if (i<size()) return *(_str+i);}
    inline const char&         operator[](size_t i) const {if (i<size()) return *(_str+i);}
    string&                    operator=(const string& b);
    string&                    operator+=(const char* other);
    string&                    operator+=(const string& other);
    inline string              operator+(const string& rhs){string temp(*this); temp+=rhs; return temp;}
    inline string              operator+(const char* rhs){string temp(*this); temp+=rhs; return temp;}
    inline void                append(const string& other) {*this+=other;}
    inline void                append(const char* other) {*this+=other;}
    inline const char*         c_str() const noexcept {return _str;}
    friend void                swap(string& str1, string& str2) {using std::swap;
                                                                swap(str1._size, str2._size);
                                                                swap(str1._str , str2._str);}


private:
    char*                       _str = nullptr;
    size_t                      _size = 0;
};

string::string(const char* other){
    copy_str(other);
}

string::string(const string& other){
    _size = other.size();
    alloc_str(_size);
    copy_str(other._str);
}

string::string(string&& other) noexcept {
    reset();
    _str = other._str;
    _size = other._size;
    other._str = nullptr;
    other._size = 0;
}

void string::reset(){
    if(_str) delete[] _str;
    _str = nullptr;
    _size = 0;
}

const char* string::alloc_str(size_t size){
    if(_str) reset();
    _size = (size > string::MAX_SIZE) ? string::MAX_SIZE : size;
    _str = new char[_size + 1];
    return _str;
}

size_t strnlen(const char* other, size_t max_size){
    size_t i=0;
    while(*(other++)){
        i++;
    }
    return (i>max_size) ? max_size: i;
}

void strcpy(char* dst, const char* src, const size_t len){
    for(size_t i=0; i<len;i++){
        *(dst+i) = *(src+i);
    }
    *(dst+len) = 0;
}

const char* string::copy_str(const char* other){
    if(other){
        size_t length = strnlen(other, string::MAX_SIZE);
        alloc_str(length);
        strcpy(_str, other, length);
        _size = length;
    }
    return _str;
}

string& string::operator=(const string& str){
    string temp(str);
    swap(*this, temp);
    return *this;
}

string& string::operator+=(const char* other){
    if(other){
        size_t other_len = strnlen(other, string::MAX_SIZE);
        size_t length = other_len + size();
        length = (length>string::MAX_SIZE) ? string::MAX_SIZE : length;
        string first(*this);
        alloc_str(length);
        strcpy(_str, first._str, first.size());
        strcpy(_str+first.size(), other, other_len);
    }
    return *this;
}

string& string::operator+=(const string& other){
    *this+=(other._str);
    return *this;
}

/***********************non-member functions************************/
std::ostream& operator<<(std::ostream& os, const string str){
    os<<str.c_str();
    return os;
}
/***********************comparison operator*************************/
inline bool operator==(const string& lhs, const string& rhs){
    if(strncmp(lhs.c_str(), rhs.c_str(), string::MAX_SIZE)==0) return true;
    return false;
}
inline bool operator!=(const string& lhs, const string& rhs){
    return !operator==(lhs,rhs);
}
inline bool operator<(const string& lhs, const string& rhs){
    if(strncmp(lhs.c_str(), rhs.c_str(), string::MAX_SIZE)<0) return true;
    return false;
}
inline bool operator>(const string& lhs, const string& rhs){
    return operator<(rhs,lhs);
}
inline bool operator>=(const string& lhs, const string& rhs){
    return !operator<(lhs,rhs);
}
inline bool operator<=(const string& lhs, const string& rhs){
    return !operator>(lhs,rhs);
}
}

#endif
