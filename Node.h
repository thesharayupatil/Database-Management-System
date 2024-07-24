#include <iostream>
#include"Book.h"
#include"player.h"
using namespace std;

template<class T>
class Node
{
private:
    T data;
    Node *next;

public:
    Node(T);

    void setData(T);
    
    bool updateData();
    
    void setNext(Node *);

    T& getData();
    
    Node *getNext();
};