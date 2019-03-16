#ifndef _STACK_
#define _STACK_

#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include "estrutura.hpp"

using namespace std;

class Stack : public EstruturaDados
{
	public:
		Stack();
		Stack(EstruturaDados *&a);
		virtual ~Stack();
		void insert(int value);
		void remove();
		void print();
};

#endif