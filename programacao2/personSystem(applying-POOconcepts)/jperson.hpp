#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

typedef struct jperson{
	string name;
	string type;
	string cnpj;
	string nasc;
	string adress;
	string email;
	string subscription;
	string social;
}jperson;

void insertJperson(string filename);
