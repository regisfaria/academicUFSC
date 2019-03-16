#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

typedef struct fperson{
	string name;
	string type;
	string cpf;
	string nasc;
	string adress;
	string es;
	string email;
}fperson;

void insertFperson(string filename);
