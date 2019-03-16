#include "product.hpp"
#include <sstream>

Product::Product()
{
	
}

Product::Product(string name, string price, string quantity)
{
	m_name = name;
	m_price = price;
	m_quantity = quantity;
}

Product::~Product()
{
	
}

void Product::updateProduct(string name, string price, string quantity)
{
	m_name = name;
	m_price = price;
	m_quantity = quantity;
}

string Product::showProduct()
{
	stringstream info;
	info << "Name : " << m_name << endl << "Price: " << m_price << endl << "Quantity: " << m_quantity << endl; 
	
	return info.str();
}
