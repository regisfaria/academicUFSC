#ifndef _QUEUE_
#define _QUEUE_

#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include "estrutura.hpp"

using namespace std;

class Queue : public EstruturaDados
{
	public:
		Queue();
		Queue(EstruturaDados *&a);
		virtual ~Queue();
		void insert(int value);
		void remove();
		void print();
};

#endif