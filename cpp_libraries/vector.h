#ifndef VECTOR_H
#define VECTOR_H

#include <assert.h>

namespace jlib{
template <typename T>
class vector{
public:
    typedef std::size_t         size_t;
    typedef T*                  Iterator;

private:
    T*                          mdata;
    size_t                      msize;
    size_t                      mcapacity;

public:
    inline                      vector (void);
    inline explicit             vector (size_t n);
    ~vector();
    inline size_t               size() const {return msize;}
    inline Iterator             begin();
    inline Iterator             end();
    inline void                 push_back (const T& v);
    inline T&                   back() {return mdata[msize-1];}
    inline Iterator             iat(size_t i) {assert(i<=msize); return begin()+i;}
    inline T&                   at(size_t i) {assert(i<msize); return begin()[i];}
    inline T&                   front() {return at(0);}
    inline T&                   operator[](const size_t i){return at(i);}
    inline T&                   pop_back();
    inline void                 clear();

    template <typename U> friend std::ostream& operator<<(std::ostream& os, const vector<U>& v);
protected:
    void                        doublecap();
    void                        quatercap();
};

template <typename T>
inline vector<T>::vector(void){
    mdata = nullptr;
    msize = 0;
    mcapacity = 0;
}

template <typename T>
inline vector<T>::vector(size_t n){
    mcapacity = n;
    msize = 0;
    mdata = new T[mcapacity];
}

template <typename T>
inline void vector<T>::push_back(const T& v){
    if (msize>=mcapacity){
        doublecap();
    }
    mdata[msize] = v;
    msize += 1;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const vector<T>& v){
    os << "[";
    for(auto i=0; i<v.msize; ++i){
        os << v.mdata[i];
        os << ", ";
    }
    os << "]\n";
    return os;
}

template <typename T>
void vector<T>::doublecap(){
    size_t newcap = (mcapacity == 0) ? 100: mcapacity * 2;
    T* newmdata = new T[newcap];
    for(size_t i=0; i<msize; ++i){
        newmdata[i] = mdata[i];
    }
    delete[] mdata;
    mdata = newmdata;
    mcapacity = newcap;
}

template <typename T>
T& vector<T>::pop_back(){
    assert(msize>0);
    msize -=1;
    if (msize<mcapacity/4){
        quatercap();
    }
    return mdata[msize];
}

template <typename T>
void vector<T>::quatercap(){
    size_t newcap = mcapacity / 4;
    T* newmdata = new T[newcap];
    for(size_t i=0; i<msize; ++i){
        newmdata[i] = mdata[i];
    }
    delete[] mdata;
    mdata = newmdata;
    mcapacity = newcap;
}

template <typename T>
typename vector<T>::Iterator vector<T>::begin(){
    return mdata;
}

template <typename T>
typename vector<T>::Iterator vector<T>::end(){
    return mdata+msize-1;
}

template <typename T>
vector<T>::~vector(){
    delete[] mdata;
}

template <typename T>
void vector<T>::clear(){
    mcapacity = 0;
    msize = 0;
    mdata = nullptr;
}

}

#endif
