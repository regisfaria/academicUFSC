#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Person
{
	private:
		string m_name;
		string m_cpf;
		string m_address;
		string m_bornDate;
	public:
		Person();
		Person(string name, string cpf, string address, string bornDate);
		~Person();
		
		void updatePerson(string name, string cpf, string address, string bornDate);
		
		string showPerson();
		
		string getName()		const {return m_name; };
		string getCpf()			const {return m_cpf; };
		string getAddress()		const {return m_address; };
		string getBornDate()	const {return m_bornDate; };
};
