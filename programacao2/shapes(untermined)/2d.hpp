#ifndef _2DFORM_
#define _2DFORM_

#include "form.hpp"
#include <iostream>
#include <stdlib.h>

using namespace std;

class Form2D : public Form
{
	protected:
		float m_height, m_width, m_area;

	public:
		//construc
		Form2D();
		Form2D(float h, float w);
		//destru
		~Form2D();
		//methods
		void showArea();
};

#endif
