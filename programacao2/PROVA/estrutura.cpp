#include "estrutura.hpp"

EstruturaDados::EstruturaDados()
{

}

EstruturaDados::~EstruturaDados()
{
	
}

int EstruturaDados::getSize()
{
	return m_value.size();
}

void EstruturaDados::reset()
{
	m_value.clear();
	cout << "Content erased!" << endl;
}

/*void EstruturaDados::print()
{
	for(int i=0; i<m_value.size(); i++)
	{
		cout << m_value.at(i) << " ";
	}
	cout << "Error?" << endl;
}*/

vector< int > EstruturaDados::getValues()
{
	return m_value;
}