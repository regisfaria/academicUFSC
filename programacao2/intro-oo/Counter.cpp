#include "Counter.hpp"

Counter::Counter()
{
	cout << "Constructor has been called!" << endl;
	Counter::Reset();
}

void Counter::Reset()
{
	m_value = 0;
}

void Counter::Counter(unsigned int value)
{
	cout << "Constructor has been called!" << endl;
	m_value = value;
}

void Counter::~Counter()
{
	cout << "Destructor has been called!" << endl;
}

void Counter::Increment()
{
	m_value++;
}

void Counter::Decrement()
{
	m_value--;
}

void Counter::Print()
{
	cout << "Counter is " << m_value << endl;
}
