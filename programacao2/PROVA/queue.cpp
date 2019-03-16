#include "queue.hpp"

Queue::Queue()
{
	
}

Queue::Queue(EstruturaDados *&a)
{
	m_value = a->getValues();
}

Queue::~Queue()
{

}

void Queue::insert(int value)
{
	m_value.push_back(value);
}

void Queue::remove()
{
	m_value.erase(m_value.begin()); 	//fifo
}

void Queue::print()
{
	for(int i=0; i<m_value.size(); i++)
	{
		cout << m_value.at(i) << " ";
	}
	cout << endl;
}