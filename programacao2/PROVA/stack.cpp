#include "stack.hpp"

Stack::Stack()
{

}

Stack::Stack(EstruturaDados *&a)
{
	m_value = a->getValues();
}

Stack::~Stack()
{

}

void Stack::insert(int value)
{
	m_value.push_back(value);
}

void Stack::remove()
{
	m_value.pop_back();
}

void Stack::print()
{
	for(int i=0; i<m_value.size(); i++)
	{
		cout << m_value.at(i) << " ";
	}
	cout << endl;
}