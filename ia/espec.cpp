#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <istream>
#include <ostream>

using namespace std;

typedef struct list
{
	string name;
	vector < string > area;
	struct list *next;
}list;

list *newList()
{
	list *l = new list;
	if (l == NULL) return NULL;

	l->next = NULL;
	return l;
}

void *delList(list *l)
{
	while(l!=NULL)
	{
		list *tmp = l;
		l = l->next;
		delete(tmp);
	}
}

void writeDB()	//Adiciona na database
{
	ofstream db;
	db.open("database.txt", ios::app);
	if(!db.is_open())
	{
		cout << "Error during the writing process" << endl;
		db.close();
	}
	
	string tmp;
	int n;
	cout << "What is the career name?" << endl;
	cin >> tmp;
	db << tmp << endl;
	cout << "How many areas this career is classified?(1 or 2)" << endl;
	cin >> n;
	db << n << endl;
	cout << "Wich area " << tmp << " is classified?" << endl;
	switch (n)
	{
		case 1:
			cout << "1: ";
			cin >> tmp;
			db << tmp << endl;
			break;
		case 2:
			cout << "1: ";
			cin >> tmp;
			db << tmp << endl;
			cout << endl;
			cout << "2: ";
			cin >> tmp;
			db << tmp << endl;
			break;
		default:
			cout << "Error during the reading process" << endl;
			db.close();
			exit(-1);
	}
	cout << "Career successfully added to the database!" << endl;
	db.close();
}

void push_front(list *l, string prof, string a1)	//para 1 area
{
	list *tmp = new list;
    if(tmp == NULL) return;
    
    tmp->name = prof;
    tmp->area.push_back(a1);
    tmp->next = l->next;
    l->next = tmp;
}

void push_front(list *l, string prof, string a1, string a2)	//para 2 areas
{
	list *tmp = new list;
    if(tmp == NULL) return;
    
    tmp->name = prof;
    tmp->area.push_back(a1);
    tmp->area.push_back(a2);
    tmp->next = l->next;
    l->next = tmp;
}

void readDB(list *base)		//Lê database
{
	ifstream db;
	db.open("database.txt", ios::in);
	if(!db.is_open())
	{
		cout << "Error during the read process";
		db.close();
	}
	
	string tmp1;
	while(getline(db, tmp1))
	{
		string a;
		getline(db, a);
		int n = a.at(0) - '0';
		if(n == 1)
		{
			string tmp2;
			getline(db, tmp2);
			push_front(base, tmp1, tmp2);
		}
		else if(n == 2)
		{
			string tmp3;
			getline(db, tmp3);
			string tmp4;
			getline(db, tmp4);
			push_front(base, tmp1, tmp3, tmp4);
		}
	}
	db.close();
	cout << "Database loaded successfully!" << endl << endl;
}

void printDB(list *db)
{
	db = db->next;
	while(db != NULL)
	{
		cout << "Career: " << db->name << endl;
		cout << "Area: ";
		for(int i=0; i<db->area.size(); i++)
		{
			cout << db->area.at(i) << " ";
		}
		cout << endl << endl;
		db = db->next;
	}
}

void showResult(list *l, vector < string > querryA, vector< int > querryR, string dislike)
{
	l = l->next;
	while(l != NULL)
	{
		int n=0, result=0;
		bool ok=true;
		for(int i=0; i<l->area.size(); i++)
		{
			n++;
			if(dislike == l->area.at(i)) ok = false;
			if(ok)
			{
				for(int j=0; j<querryA.size(); j++)
				{
					if(querryA.at(j) == l->area.at(i)) result += querryR.at(j);
				}
			}
		}

		if(ok)
		{
			if(n == 1)
			{
				double p = (result*100)/10;
				if(p > 70) cout << l->name << " " << p << "%" << endl; 
			}
			else
			{
				double p = (result*100)/20;
				if(p > 70) cout << l->name << " " << p << "%" << endl;
			}
		}

		l = l->next;
	}

}

void setArea(vector< string > *querry)		//preenche o vetor com as areas de atuação disponiveis
{
	querry->push_back("exatas");
	querry->push_back("computaçao");
	querry->push_back("saude");
	querry->push_back("ciencias_biologicas");
	querry->push_back("artes");
	querry->push_back("humanas");
	querry->push_back("letras");
	querry->push_back("social");
	querry->push_back("sustentabilidade");
}

void startTest(list *base)
{
	vector< string > area;
	vector< int > result;
	string dlike;
	setArea(&area);

	string tmp;
	int n;
	
	cout << "1 - Wich one from the following areas you dislike?" << endl;
	cout << "Areas: ";
	for(int i=0; i<area.size(); i++)
	{
		cout << area.at(i);
		if(i == area.size() - 1)
		{
			cout << "." << endl;
		}
		else
		{
			cout << ", ";
		}
	}
	cin >> dlike;

	cout << "Please, answer the following questions in a scale from 0 to 10." << endl;
	cout << "2 - Do you like math and working with numbers?" << endl;
	cin >> n;
	result.push_back(n);

	cout << "3 - Do you like technology and programming?" << endl;
	cin >> n;
	result.push_back(n);

	cout << "4 - Would you like to help other people treating their health?" << endl;
	cin >> n;
	result.push_back(n);

	cout << "5 - Do you like study about the planet and the living things in it?" << endl;
	cin >> n;
	result.push_back(n);

	cout << "6 - Would you like to work with art and music?" << endl;
	cin >> n;
	result.push_back(n);

	cout << "7 - How you feel about studying the human thinking and its actions over the history?" << endl;
	cin >> n;
	result.push_back(n);

	cout << "8 - Do you like to read and learn new languages?" << endl;
	cin >> n;
	result.push_back(n);

	cout << "9 - Would a social work(working constantly with a lot of people) fit you?" << endl;
	cin >> n;
	result.push_back(n);

	cout << "10 - Would you like to find new ways to help nature?" << endl;
	cin >> n;
	result.push_back(n);

	showResult(base, area, result, dlike);
}

int main(int argc, char **argv)
{
	list *database = newList();
	readDB(database);

	cout << "--------------------------------------------" << endl;
	cout << "| Welcome to career test system |" << endl;
	cout << "--------------------------------------------" << endl;
	
	int n=0;
	while(n != 4)
	{
		cout << endl;
		cout << "--------------------------------------------" << endl;
		cout << "|1| = Add area to database" << endl;	//ok
		cout << "|2| = List database" << endl;			//ok
		cout << "|3| = Start the career test" << endl;
		cout << "|4| = Leave system" << endl;			//ok
		cout << "--------------------------------------------" << endl;
		cin >> n; 

		switch(n)
		{
			case 1:
				writeDB();
				break;
			case 2:
				printDB(database);
				break;
			case 3:
				startTest(database);
				break;
			case 4:
				cout << "Thanks for using the system!" << endl;
				break;
			default:
				cout << "Option selected is invalid, please try again." << endl;
				break;
		}
	}

	delList(database);
	return 0;
}