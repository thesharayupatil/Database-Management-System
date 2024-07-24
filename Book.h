using namespace std;
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <string.h>

class Book
{
	int bookId;
	char bookName[20];
	char authorName[20];
	double price;
	int rating;
	public:
		Book();
		Book(int,char*,char*,double,int); //parametries constructor
		
		//setter or muttator
		void setNumber(int);
		void setBookName(char*);
		void setAuthorName(char*);
		void setPrice(double);
		void setRating(int);
		
		//getter or accessor or inspector
		int getNumber();
		char* getName();
		char* getAuthorName();
		double getPrice();
		int getRating();
		
		
		//display function
		void display();
		bool update();
};
