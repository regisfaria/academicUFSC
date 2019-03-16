#include "3d.hpp"


Form3D::Form3D()
{
	m_width = 0;
	m_height = 0;
	m_depth = 0;
	m_area = 0;
	m_perimeter = 0;
}

Form3D::Form3D(float d, float h, float w) : Form3D()
{
	m_width = w;
	m_depth = d;
	m_height = h;
	m_area = w*d*h;
}

Form3D::~Form3D()
{

}

void Form3D::showArea()
{
	if(m_area != 0) cout << "The area is: " << m_area << "." << endl;
	else cout << "Can't calculate this area." << endl;
}