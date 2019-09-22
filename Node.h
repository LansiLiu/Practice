template<class T>
class Node
{
friend Chainlist<T>;
private:
    T data;
    Node<T> *next;
public:
    Node(T& x);
};