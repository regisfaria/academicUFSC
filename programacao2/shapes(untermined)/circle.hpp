#ifndef _CIRCLE_
#define _CIRCLE_

#include "2d.hpp"
#include <iostream>
#include <stdlib.h>

using namespace std;

class Circle : public Forma2D
{
	protected:
		float m_radius, m_diameter, m_circumference;
	public:
		Circle();
		Circle(float w, float h, float r, float d, float c);
		~Circle();


}

#endif
