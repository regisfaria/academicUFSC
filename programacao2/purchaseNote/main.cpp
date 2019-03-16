#include "person.hpp"
#include "product.hpp"
#include "purchase.hpp"

int main(int argc, char * argv[])
{
	Person a;
	a.Person("Regis Faria Pinheiro", "000.000.000-00", "Rio das Ostras - RJ", "04/02/1998");
	
	Product x, y, z;
	x.Product("Ilicito 1", "50,00", "3");
	y.Product("Whey Protein GOLD", "130,00", "1");
	z.Product("Isqueiro BIC", "7,00", "5");
	
	Product vec;
	Purchase one;
	one.Purchase("Regis Faria Pinheiro", "#0001", vec);
	one.insertProduct(x);
	one.insertProduct(y);
	one.insertProduct(z);
	one.endPurchase("#0001", a);
	
	return 0;
}
