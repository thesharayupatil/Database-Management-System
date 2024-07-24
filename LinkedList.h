#include"Node.cpp"
#include<fstream>

template<class T>
class LinkedList
{

    Node<T> *start;

	public:
		
    LinkedList();
    
    
    bool insertRecordBegining(T);
    
    bool insertRecordEnd(T);
    
    bool insertRecordPos(T, int);


    Node<T>* searchRecord(int);
    
    Node<T>* searchRecord(char*);
    
    
    bool searchAuthor(char*);

    bool updateRecord(Node<T>*&);


    bool deleteRecordBegining(T &);
    
    bool deleteRecordLast(T &);
    
    bool deleteRecordPos(T &, int );
    
    bool deleteRecordPos(T &, char*);

    
    void display();
	
	
	~LinkedList();


};