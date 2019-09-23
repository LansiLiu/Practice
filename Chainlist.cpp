/*
FBI WARNING
THIS IS A MODIFICATION TEST!!
*/
#include "node.h"
#include "chainlist.h"
TP Chainlist<T>::Chainlist(){
    first = nullptr;
}
TP Chainlist<T>::~Chainlist(){
    Node<T> *foobar;
    while (first != nullptr)
    {
        foobar = first->next;
        delete foobar;
        first = foobar;    
    }   
}
TP int Chainlist<T>::length() const{
    int len = 0;
    Node<T> *cur = first;
    while (cur != nullptr)
    {
        cur = cur->next;
        len++;
    }
}
TP int Chainlist<T>::search(const T&x) const{
    Node<T> *cur = first;
    int index = 1;//it is, after all, a list rather than an array
    // if cur == nullptr, then that data to be searched isn't in the list;
    while (cur != nullptr && cur->data != x)
    {
        cur = cur->next;
        index++;
    }
    if(cur == nullptr) return 0;
    return index;
}
TP void Chainlist<T>::output(std::ostream& out) const{
    Node<T> *cur = first;
    while (cur != nullptr)
    {
        out<<cur->data<<" ";
        cur = cur->next;
    }
    out<<'\n';
}
TP std::ostream& operator << (std::ostream& out, const Chainlist<T>& x){
    x.output();
    return out;
}
TP Chainlist<T>& Chainlist<T>::erase(int pos){
    int cur = 0;
    Node<T> *curptr = first;
    if(pos < 1 || first == nullptr) throw OutOfBounds();
}