#ifndef _FORM_
#define _FORM_

#include <stdlib.h>
#include <iostream>

using namespace std;

class Form
{
	protected:
		vector < float > m_side; 
		float m_perimeter;

	public:
		//constructors
		Form();
		//destructor
		~Form();
		//methods
		void setSides(vector < float > s);
		void showPerimeter();
};

#endif
