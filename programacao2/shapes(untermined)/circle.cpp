#include "circle.hpp"

Circle::Circle()
{
	m_diameter = m_width = m_height = m_area = m_perimeter = m_circumference = m_radius = 0;
}

Circle::Circle(float w, float h, float r, float d, float c)
{
	m_diameter = d;
	m_width = w;
	m_height = h;
	m_radius = r;
	m_circumference = c;
}