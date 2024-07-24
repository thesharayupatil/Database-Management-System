#include"Book.h"	

	Book::Book()      //default constrctor
	{
		this->bookId=0;
		strcpy(this->bookName,"Not Given");
		strcpy(this->authorName,"Not Given");
		this->price=0;
		this->price=0;
		this->rating=0;
	}
	//parametries constructor
	Book::Book(int bookId,char*bookName,char*authorName,double price,int rating)
	{
		this->bookId=bookId;
		strcpy(this->bookName,bookName);
		strcpy(this->authorName,authorName);
		this->price=price;
		this->rating=rating;
	}
	//setter or muttator
	void Book::setNumber(int bookId)
	{
		this->bookId=bookId;
	}
	void Book::setBookName(char* bookName)
	{
		strcpy(this->bookName,bookName);
	}
	void Book::setAuthorName(char*authorName)
	{
		strcpy(this->authorName,authorName);
	}
	void Book::setPrice(double price)
	{
		this->price=price;
	}
	void Book::setRating(int rating)
	{
		this->rating=rating;
	}
	//getter or accessor or inspector
	int Book::getNumber()
	{
		return this->bookId;
	}
	char* Book::getName()
	{
		return this->bookName;
	}
	char* Book::getAuthorName()
	{
		return this->authorName;
	}
	double Book::getPrice()
	{
		return this->price;
	}
	int Book::getRating()
	{
		return this->rating;
	}
	//display function
	void Book::display()
	{
		cout<<"\t _________________________________________________________\n";
		cout<<"\t|Book.Id|Book Name  |Author Name  | Price      |  Rating |\n";
		cout<<"\t|_______|___________|_____________|____________|_________|\n";
		//	cout<<"\t|"<<this-><< "|" <<this->bookName(<<"|"<<this->authorName<<"|"<<this->price<<"|"<<this-><<"|\n";
		cout<<"\t|"<< left << setw(7) <<this->bookId<<"|"<< left << setw(10)<<this->bookName<<"|"<< left << setw(15) <<this->authorName <<"|"<< setw(10) << fixed << setprecision(2) << this->price << "| " << setw(10) << fixed << setprecision(2)<<this->rating<<"|\n";
		cout<<"\t|_______|___________|_____________|____________|_________|\n";
	}
	bool Book::update()
	{
		int schoice;
		cout<<"\n";
		cout<<" _______________________________________________________________\n";
		cout<<"| MENU                                                          |\n";
		cout<<"| 1.Update price                                                |\n";
		cout<<"| 2.Update Rating                                               |\n";
		cout<<"|_______________________________________________________________|\n";
		cout<<"  Enter your choice:-";
		cin>>schoice;
		switch(schoice)
		{
			case 1:
				{
					double price;
			        cout << "\nEnter New Book Price:- ";
			        cin >> price;
			        setPrice(price);
			        return true;
				}break;
			case 2:
				{
					int rating;
					cout<<"\nEnter New Book Rating:- ";
					cin>>rating;
					setRating(rating);
					return true;
				}break;
			default:
				{
					cout<<"\nInvalid choice ";
					return false;
				}	
		}
	}

