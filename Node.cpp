#include "Node.h"
template<class T>
Node<T>::Node(T data)
{
    this->data=data;
    this->next = NULL;
}

template<class T>
void Node<T>::setData(T d)
{
    this->data=d;
}



template<class T>
void Node<T>::setNext(Node<T> *n)
{
    this->next = n;
}

template<class T>
T& Node<T>::getData()
{
    return this->data;
}

template<class T>
Node<T> *Node<T>::getNext()
{
    return this->next;
}