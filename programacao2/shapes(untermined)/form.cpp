#include "form.hpp"

Form::Form()
{
	m_perimeter = 0;
}

Form::~Form()
{

}

void Form::setSides(vector < float > s)
{
	for(int i=0; i<s.size(); i++)
	{
		m_side.at(i) = s.at(i);
	}
}

void Form::showPerimeter();
{
	for(int i=0; i<m_side.size(); i++)
	{
		m_perimeter += m_side.at(i);
	}
	cout << "The perimeter is: " << m_perimeter << "." << endl;
}