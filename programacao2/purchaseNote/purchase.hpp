#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include "product.hpp"
#include "person.hpp"

using namespace std;

class Purchase
{
	private:
		string m_name;
		string m_id;
		vector< Product > m_product;
	public:
		Purchase();
		Purchase(string name, string id, vector < Product > product);
		~Purchase();
		
		void insertProduct(Product p);
		
		void endPurchase(string id, Person k);
};
