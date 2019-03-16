#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Product
{
	private:
		string m_name;
		string m_price;
		string m_quantity;
	public:
		Product();
		Product(string name, string price, string quantity);
		~Product();
		
		void updateProduct(string name, string price, string quantity);
		
		string showProduct();
		
		string getName(); 		const {return m_name; };
		string getPrice(); 		const {return m_price; };
		string getQuantity(); 	const {return m_quantity; };
};
