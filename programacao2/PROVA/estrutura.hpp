#ifndef _ESTRUTURADADOS_
#define _ESTRUTURADADOS_

#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class EstruturaDados 
{
	protected:
		vector< int > m_value;
	public:
		EstruturaDados();
		virtual ~EstruturaDados();
		int getSize();
		void reset();
		//void print();
		vector < int > getValues();
};

#endif