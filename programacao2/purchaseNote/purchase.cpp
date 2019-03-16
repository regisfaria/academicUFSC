#include "purchase.hpp"

Purchase::Purchase()
{
	
}

Purchase::Purchase(string name, string id, vector < string > product)
{
	m_name = name;
	m_id = id;
	m_product = product;
}

Purchase::~Purchase()
{
	
}

void Purchase::insertProduct(Product p)
{
	m_product.push_back(p);
	
	cout << "Product added to the purchase with sucess." << endl;
}

void Purchase::endPurchase(string id, Person k)
{
	if(id != m_id)
	{
		cout << "Purchase ID not found." << endl;
		return NULL;
	}
	cout << "Ending purchase..." << endl << endl << endl;
	int pricef=0;
	
	cout << "Purchase made by:" << endl;
	cout << k.showPerson() << endl;
	cout << "-----------------------------------------------------------------" << endl;
	cout << "#Product          #Price          #Quantity          #Total price" << endl;
	for(int i=0; i<p.size(); i++)
	{
	 	Product tmp= m_product.at(i);
	 	int totalp=0;
	 	totalp = atoi(tmp.getPrice()) * atoi(tmp.getQuantity());
	 	pricef += totalp;
	 	
	 	cout << tmp.getName() << "          " << "R$: " <<  tmp.getPrice() << "          " << tmp.getQuantity() << "          " << "R$: " << totalp << endl;
	}
}
