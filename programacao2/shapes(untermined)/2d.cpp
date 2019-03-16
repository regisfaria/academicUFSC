#include "2d.hpp"

Form2D::Form2D()
{
	m_height = 0;
	m_width = 0;
	m_area = 0;
	m_perimeter = 0;
}

Form2D::Form2D(float h, float w) : Form2D()
{
	m_height = h;
	m_width = w;
	m_area = w*h;
}

void Form2D::showArea()
{
	if(m_area != 0) cout << "The area is: " << m_area << "." << endl;
	else cout << "Can't calculate this area." << endl;
}