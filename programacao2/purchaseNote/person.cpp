#include "person.hpp"
#include <sstream>

Person::Person()
{
	
}

Person::Person(string name, string cpf, string address, string bornDate)
{
	m_name = name;
	m_cpf = cpf;
	m_address = address;
	m_bornDate = bornDate;
}

Person::~Person()
{
	
}

void Person::updatePerson(string name, string cpf, string address, string bornDate)
{
	m_name = name;
	m_cpf = cpf;
	m_address = address;
	m_bornDate = bornDate;
}

string Person::showPerson()
{
	stringstream info;
	info << "Nome : " << m_name << endl << "CPF: " << m_cpf << endl << "Address: " << m_address << endl << "Born date: " << m_bornDate << endl;
	
	return info.str();
}
