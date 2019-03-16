#ifndef _3DFORM_
#define _3DFORM_

#include "form.hpp"
#include <iostream>
#include <stdlib.h>

using namespace std;

class Form3D : public Form
{
	protected:
		float m_depth, m_height, m_width, m_area;

	public:
		//constructor
		Form3D();
		Form3D(float d, float h, float w);
		//desctructor
		~Form3D();
		//methods
		void showArea();
		
};

#endif
