#pragma once
#include <iostream>
#include <iterator>
#include <memory>

namespace jlib{
template <typename T>
class node{
public:
    T                       data;
    node*                   next;
    node*                   prev;
    inline                  node(){next=nullptr; prev=nullptr;}
    inline                  node(T& a){data = a; next=nullptr; prev=nullptr;}
    inline                  node(node& a){data=a.data;next=a.next;prev=a.prev;}
    inline                  ~node(){next=nullptr; prev=nullptr;}
};

template <typename list_type, typename _pointer, typename _reference>
class list_iterator: public std::iterator<std::bidirectional_iterator_tag,
                                          typename list_type::value_type,
                                          typename list_type::difference_type,
                                          _pointer,
                                          _reference>{
public:
    using value_type          = typename list_type::value_type;
    using difference_type     = typename list_type::difference_type;
    using node_pointer        = node<value_type>*;
    using iterator            = list_iterator<list_type, _pointer, _reference>;
    inline                    list_iterator(){nodeP=nullptr;}
    inline                    list_iterator(const node_pointer& np){nodeP = np;}
    inline                    list_iterator(const iterator& it){nodeP=it.nodeP;}
    inline                    ~list_iterator(){}
    inline iterator&          operator=(const iterator& it) {nodeP=it.nodeP; return *this;}
    inline iterator           operator++(int n){for(int i=0;i<n;++i) {nodeP=nodeP->next;} return *this;}
    inline iterator&          operator++(){nodeP=nodeP->next; return *this;}
    inline iterator&          operator--(){nodeP=nodeP->prev; return *this;}
    inline iterator           operator--(int n){for(int i=0;i<n;++i) {nodeP=nodeP->prev;} return *this;}
    inline bool               operator!=(const iterator& other) const {return nodeP!=other.nodeP;}
    inline bool               operator==(const iterator& other) const {return nodeP==other.nodeP;}
    inline value_type&        operator*(){return nodeP->data;}

private:
    node_pointer              nodeP;
};

template <typename T, typename _alloc=std::allocator<T>>
class list{
public:
    using allocator_type    = _alloc;
    using value_type        = typename _alloc::value_type;
    using size_type         = typename _alloc::size_type;
    using reference         = typename _alloc::reference;
    using const_reference   = typename _alloc::const_reference;
    using difference_type   = typename _alloc::difference_type;
    using pointer           = typename _alloc::pointer;
    using const_pointer     = typename _alloc::const_pointer;
    using list_node         = node<T>;
    using list_type         = list<T, _alloc>;
    using iterator          = list_iterator<list_type, pointer, reference>;
    using const_iterator    = list_iterator<list_type, const_pointer, const_reference>;
    using reverse_iterator  = std::reverse_iterator<iterator>;
    using const_reverse_iterator = std::reverse_iterator<const_iterator>;

    inline                  list();                   //constructors
    inline                  list(T a);
    inline                  list(list &list);
    inline                  ~list();                  //destructor
    inline void             push_back(T a);
    inline void             push_front(T a);
    inline void             pop_back();
    inline void             pop_front();
    inline std::ostream &   write(std::ostream & os) const ;   //print list
    inline size_type        size() {return _size;}

    inline iterator         begin() {iterator it(head); return it;}
    inline const_iterator   begin() const {const_iterator it(head); return it;}
    inline const_iterator   cbegin() const {const_iterator it(head); return it;}
    inline iterator         end(){iterator it(tail->next); return it;}
    inline const_iterator   end() const {const_iterator it(tail->next); return it;}
    inline const_iterator   cend() const {const_iterator it(tail->next); return it;}

private:
    list_node*              head;
    list_node*              tail;
    size_type               _size;
};

template <typename T, typename _alloc>
list<T, _alloc>::list(){
    head = nullptr;
    tail = head;
    _size = 0;
}

template <typename T, typename _alloc>
list<T, _alloc>::~list(){


}

template <typename T, typename _alloc>
list<T, _alloc>::list(T a){
    list_node* tnode = new list_node;
    tnode->data = a;
    if(head==nullptr){
        head = tnode;
        tail = head;
    }
    else{
        tnode->prev = tail;
        tail->next = tnode;
        tail = tail->next;
    }
    _size+=1;
}

template <typename T, typename _alloc>
void list<T, _alloc>::push_back(T a){
    list_node* tnode = new list_node;
    tnode->data = a;
    if(head==nullptr){
        head = tnode;
        tail = head;
    }
    else{
        tnode->prev = tail;
        tail->next = tnode;
        tail = tail->next;
    }
    _size+=1;
}

template <typename T, typename _alloc>
void list<T, _alloc>::push_front(T a){
    list_node* tnode = new list_node;
    tnode->data = a;
    if(head==nullptr){
        head = tnode;
        tail = head;
    }
    else{
        head->prev = tnode;
        tnode->next = head;
        head = tnode;
    }
    _size+=1;
}

template <typename T, typename _alloc>
void list<T, _alloc>::pop_back(){
    tail = tail->prev;
    delete tail->next;
    tail->next = nullptr;
    _size-=1;
}

template <typename T, typename _alloc>
void list<T, _alloc>::pop_front(){
    head = head->next;
    delete head->prev;
    head->prev = nullptr;
    _size-=1;
}

template <typename T, typename _alloc>
std::ostream& list<T, _alloc>::write(std::ostream& os) const{
    auto thead = this->head;
    os << "[" ;
    while(thead!=nullptr){
        os << thead->data << " " ;
        thead = thead->next;
    }
    os << "]";
    return os;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const list<T> &list){
    return list.write(os);
}

}
