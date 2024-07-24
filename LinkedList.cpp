#include"LinkedList.h"

template<class T>


LinkedList<T>::LinkedList()   //constructor
{
	this->start=NULL;
	
	//File Handelling
	ifstream readbook;
	if(sizeof(T)==sizeof(Book))
	{
		readbook.open("dataBook.bin",ios_base::binary);
	}
	else if(sizeof(T)==sizeof(Players))
	{
		readbook.open("dataPlayer.bin",ios_base::binary);
	}
	else
	{
		readbook.open("DataFile.bin",ios_base::binary);
	}
	if(readbook.is_open())
	{
		T b1;
		while(!readbook.eof())
		{
			readbook.read(reinterpret_cast<char*>(&b1),sizeof(T));
			if(!readbook.eof())
			{
				insertRecordEnd(b1);
			}
		}
		readbook.close();
	}
}

template<class T>     //destructor
LinkedList<T>::~LinkedList()
{
	Node<T>*p=this->start;
	ofstream out;
	if(sizeof(T)==sizeof(Book))
	{
		out.open("dataBook.bin",ios_base::binary);
	}
	else if(sizeof(T)==sizeof(Players))
	{
		out.open("dataPlayer.bin",ios_base::binary);
	}
	else
	{
		out.open("DataFile.bin",ios_base::binary);
	}
	if(p!=NULL)
	{
		while(p!=NULL)
		{
			out.write((char *)(&(p->getData())),sizeof(T));
			this->start=p->getNext();
			delete p;
			p=this->start;
		}
		out.close();
	}
}



template<class T>
bool LinkedList<T>::insertRecordBegining(T data)    // Insert At Begining
{
	Node<T> *temp = new Node<T>(data);
	if(start==NULL)
	{
		this->start=temp;
		return true;
	}

	temp->setNext(this->start);
	this->start=temp;
	return true;
}

template <class T>

 
bool LinkedList<T>::insertRecordEnd(T data)   //Insert At The End
{
    Node<T> *temp = new Node<T>(data);
    if (this->start == NULL)
    {
        this->start = temp;
        return true;
    }
    Node<T> *p;
    p = this->start;
    while (p->getNext() != NULL)
    {
        p = p->getNext();
    }
    p->setNext(temp);

    return true;
}



template <class T>
bool LinkedList<T>::insertRecordPos(T data, int pos)     //Insert At The Position
{
    Node<T> *temp = new Node<T>(data);
    if (this->start == NULL)
    {
        this->start = temp;
        return true;
    }
    else
    {
        Node<T> *p;
        p = this->start;
        int i = 1;
        while (p->getNext() != NULL && i <= pos)
        {
            if (i == pos - 1 || p->getNext() == NULL)
            {
                temp->setNext(p->getNext());
                p->setNext(temp);
                break;
            }
            p = p->getNext();
            i++;
            
        }
        return true;
    }
    return false;
    
}



template<class T>
Node<T>*LinkedList<T>::searchRecord(int num)     //Search Record id
{
	if(start==NULL)
	{
		return NULL;
	}
	else
	{
		Node<T>*p=this->start;
		while(p!=NULL)
		{
			if(p->getData().getNumber()==num)
			{
				return p;
			}
			p=p->getNext();
		}
		return NULL;
	}
}

template<class T>
Node<T> *LinkedList<T>::searchRecord(char *name)      //Search Record name
{
	if(start==NULL)
	{
		return NULL;
	}
	else
	{
		Node<T> *p=start;
		while(p!=NULL)
		{
			if(strcasecmp(p->getData().getName(),name)==0)
			{
				return p;
			}
			p=p->getNext();
		}
		return NULL;
	}
}



template<class T>
bool LinkedList<T>::deleteRecordBegining(T &d)    //Delete 1st Record
{
	if(this->start==NULL)
	{
		return false;
	}
	else
	{
		Node<T>*p=this->start;
		d=this->start->getData();
		this->start=p->getNext();
		delete p;
		return true;
	}
}
template<class T>
bool LinkedList<T>::deleteRecordLast(T &d)      //Delete last Record
{
	if(this->start==NULL)
	{
		return false;
	}
	if(this->start->getNext()==NULL)
	{
		Node<T> *p=this->start;
		d=this->start->getData();
		this->start=this->start->getNext();
		delete p;
		return true;
	}
	else
	{
		Node<T> *p=this->start;
		while(p->getNext()->getNext()!=NULL)
		{
			p=p->getNext();
		}
		d=p->getNext()->getData();
		delete p->getNext();
		p->setNext(NULL);
		return true;	
	}
	return false;
	
	
}

template<class T>
bool LinkedList<T>::deleteRecordPos(T &d,int num)         //Delete Record id
{
	if(start==NULL)
	{
		return false;
	}
	Node<T> *q=searchRecord(num);
	if(q!=NULL)
	{
		if(q==start)
		{
			return deleteRecordBegining(d);
		}
		if(q->getNext()==NULL)
		{
			return deleteRecordLast(d);
		}
		Node<T> *p=start;
		while(p->getNext()!=q)
		{
			p=p->getNext();
		}
		if(p->getNext()==q)
		{
			d=q->getData();
			p->setNext(q->getNext());
			delete q;
			return true;
		}
	}
	return false;
}

template<class T>
bool LinkedList<T>::deleteRecordPos(T &d,char* name)      //Delete Record name
{
	if(start == NULL)
	{
		return false;
	}
	Node<T> *q=searchRecord(name);
	if(q!=NULL)
	{
		if(q==this->start)
		{
			return deleteRecordBegining(d);
		}
		if(q->getNext()==NULL)
		{
			return deleteRecordLast(d);
		}
		Node<T> *p=start;
		while(p->getNext()!=q)
		{
			p=p->getNext();
		}
		if(p->getNext()==q)
		{
			d=q->getData();
			p->setNext(q->getNext());
			delete q;
			return true;
		}
	}
	return false;
}


template <class T>
bool LinkedList<T>::updateRecord(Node<T> *&data)            //Update Record
{
    return data->getData().update();
}

template<class T>
void LinkedList<T>::display()            //display
{
	if(start == NULL)
	{
		cout<<"\n\tList is Empty\n";
		return;
	}
	Node<T> *p=this->start;
	while(p!=NULL)
	{
		p->getData().display();
		p=p->getNext();
	}
}

template<class T>
bool LinkedList<T>::searchAuthor(char* k)
{
	if(start==NULL)
	{
		cout<<"No books in database";
		return false;
	}
	else
	{
		Node<T> *p=this->start;
		while(p!=NULL)
		{
			if(strcpy(p->getData().getAuthorName(),k)==0)
			{
				p->getData().display();
			}
			p=p->getNext();
		}
		return true;		
	}
	return false;
	
		
} 

