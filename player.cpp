#include "player.h"

int Players::no = 0;  

Players::Players()
{
	strcpy(this->name,"Not Mentioned");
	this->number=0;
	this->matches=0;
	this->runs=0;
	this->wickets=0;
}

Players::Players(int& jno,char* name,int& matches,int& runs,int& wickets)
{
	
	strcpy(this->name,name);
	this->number=jno;
	this->matches=matches;
	this->runs=runs;
	this->wickets=wickets;
	this->srno=(++no);
}

//mutators setters
void Players::setName(char* name)
{
	strcpy(this->name,name);
}

void Players::setNumber(int& jno)
{
	this->number=jno;
}

void Players::setMatches(int matches)
{
	this->matches=matches;
}

void Players::setRuns(int runs)
{
	this->runs=runs;
}

void Players::setWickets(int wickets)
{
	this->wickets=wickets;
}

void Players::setSerialno(int sno)
{
	this->srno = sno;
}

//asseccers getters
char* Players::getName()
{
	return this->name;
}


int Players::getNumber()
{
	return this->number;
}


int Players::getMatches()
{
	return this->matches;
}


int Players::getRuns()
{
	return this->runs;
}


int Players::getWickets()
{
	return this->wickets;
}


int Players::getSerialno()
{
	return this->getSerialno();
}

bool Players::update()
{
	int U;
	cout << "\n--------What You Want To Update---------\n";
	cout << "\t1.Update Player Matches \n\t2.Update Player Runs \n\t3.Update Player Wickets \nEnter Your Choice: ";
	cin >> U;
	switch (U)
	{ 
	case 1:
	{
		int matches;
		cout << "\nEnter Updated Matches: ";
		cin >> matches;
		setMatches(matches);
		return true;
	}
	case 2:
	{
		int runs;
		cout << "\nEnter Updated Runs: ";
		cin >> runs;
		setRuns(runs);
		return true;
	}
	case 3:
	{
		int wickets;
		cout << "\nEnter Updated Wickets:";
		cin >> wickets;
		setWickets(wickets);
		return true;
	}
	default:
		cout << "\n\tInvalid Choice!\n";
		return false;
	}
}

void Players::display()
{
	cout<<"\t|"<<left<<setw(2)<<this->srno<<"   | "<<left<<setw(20)<<this->getName()<<"|   "<<left<<setw(3)<<this->getNumber()<<"\t|  "<<left<<setw(4)<<this->getMatches()<<"\t  |  "<<left<<setw(6)<<this->getRuns()<<" |   "<<left<<setw(4)<<this->getWickets()<<"   |\n";
	cout<<"\t|_____|_____________________|___________|_________|_________|__________|\n";
}

void title()
{
	cout<<"\t________________________________________________________________________\n";
	cout<<"\t|Sr.no|     Player Name     | Jersy no. | Matches |  Runs   |  Wickets |\n";
	cout<<"\t|_____|_____________________|___________|_________|_________|__________|\n";
}
