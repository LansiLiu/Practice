#include "Node.h"
template<class T>
Node<T>::Node(T& x){
    data = x;
    next = nullptr;
}