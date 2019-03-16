#include "box.hpp"

Box::Box()
{
	m_width = 1;
	m_height = 1;
	m_depth = 1;
}

Box::Box(float w, float h, float d)
{
	m_width = w;
	m_height = h;
	m_depth = d; 
}

Box::~Box()
{
	cout << "Ohhh man, I'm dying!!!" << endl;
}

void Box::setDimensions(float w, float h, float d)
{
	m_width = w;
	m_height = h;
	m_depth = d; 
}

void Box::show()
{
	cout << "Height: " << m_height << endl;
	cout << "Width: " << m_width << endl;
	cout << "Depth: " << m_depth << endl;
}
