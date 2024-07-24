#include<iostream>
#include<string.h>
#include <iomanip>

using namespace std;

//Players datatype
class Players
{
	static int no;
	int srno;
	char name[20];
	int number;
	int matches;
	int runs;
	int wickets;
	
	public:
	Players();
	Players(int&,char*,int&,int&,int&);
	
	//mutators
	void setName(char*);
	void setNumber(int&);
	void setMatches(int);
	void setRuns(int);
	void setWickets(int);
	void setSerialno(int);
	
	//asseccers
	char* getName();
	int getNumber();
	int getMatches();
	int getRuns();
	int getWickets();
	int getSerialno();
	
	void display();
	bool update();
	
};

