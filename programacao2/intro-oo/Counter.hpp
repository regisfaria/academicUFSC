#ifndef COUNTER_H
#define COUNTER_H

#include <iostream>
#include <stdlib.h>

using namespace std;

class Counter
{
	private:
		unsigned int m_value;
	public:
		Counter();
		Counter(unsigned int value);
		~Counter();
		void Reset();
		void Increment();
		void Decrement();
		void Print();
};

#endif
