#include "jperson.hpp"

void insertJperson(string filename)
{
	jperson p;
	
	cout << endl << "Insert your name: ";
	cin >> p.name;
	cout << endl;
	cout << "CNPJ: ";
	cin >> p.cnpj;
	cout << endl;
	cout << "Insert your birth date as following xx/yy/zzzz: ";
	cin >> p.nasc;
	cout << endl;
	cout << "Adress: ";
	cin >> p.adress;
	cout << endl;
	cout << "E-mail: ";
	cin >> p.email;
	cout << endl;
	cout << "State registration: ";
	cin >> p.subscription;
	cout << endl;
	cout << "Social objective: ";
	cin >> p.social;
	cout << endl;
	
	ofstream file(filename.c_str(), std::ios::in | std::ios::out | std::ios::ate);
	if(file.is_open())
	{
		file << p.name << endl;
		file << "#" << "j" << endl;
		file << "#" << p.cnpj << endl;
		file << "#" << p.nasc << endl;
		file << "#" << p.adress << endl;
		file << "#" << p.email << endl;
		file << "#" << p.subscription << endl;
		file << "#" << p.social << endl;
		cout << "Data saved with sucess!" << endl << endl << endl << endl;
	}
	else
	{
		cout << "Error, can't save the query." << endl;
		return;
	}
	file.close();
}
