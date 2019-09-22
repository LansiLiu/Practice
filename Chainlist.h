#include "Node.h"
#include <iostream>
#define TP template<class T>
template<class T>
class Chainlist{
    private:
        Node<T> *first;
    public:
        Chainlist<T>(){}
        ~Chainlist<T>(){}
        int length() const;
        bool empty() const ;
        bool find(int pos, T& x) const;
        int search(const T& x) const;
        Chainlist<T>& erase(int pos);
        Chainlist<T>& insert(int pos, const T& x);
        void output(std::ostream& out) const;
};