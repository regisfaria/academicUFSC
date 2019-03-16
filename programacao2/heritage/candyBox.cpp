#include "candyBox.hpp"

CandyBox::CandyBox()
{
	m_content = "Empty";
}

CandyBox::~CandyBox()
{
	cout << "Ohhh man, I'm dying!!!" << endl;
}

void CandyBox::setContent(string name)
{
	m_content = name;
}

void CandyBox::show()
{
	Box::show(); 
	cout << "Contents are: " << m_content << endl;
}
