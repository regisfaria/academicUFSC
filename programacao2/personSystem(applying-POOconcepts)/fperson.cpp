#include "fperson.hpp"

void insertFperson(string filename)
{
	fperson p;
	
	cout << endl << "Insert your name: ";
	cin >> p.name;
	cout << endl;
	cout << "CPF: ";
	cin >> p.cpf;
	cout << endl;
	cout << "Insert your birth date as following xx/yy/zzzz: ";
	cin >> p.nasc;
	cout << endl;
	cout << "Adress: ";
	cin >> p.adress;
	cout << endl;
	cout << "Civil state: ";
	cin >> p.es;
	cout << endl;
	cout << "E-mail: ";
	cin >> p.email;
	cout << endl;
	
	ofstream file(filename.c_str(), std::ios::in | std::ios::out | std::ios::ate);
	if(file.is_open())
	{
		file << p.name << endl;
		file << "#" << "f" << endl;
		file << "#" << p.cpf << endl;
		file << "#" << p.nasc << endl;
		file << "#" << p.adress << endl;
		file << "#" << p.es << endl;
		file << "#" << p.email << endl;
		cout << "Data saved with sucess!" << endl << endl << endl << endl;
	}
	else
	{
		cout << "Error, can't save the query." << endl;
		return;
	}
	file.close();
}
