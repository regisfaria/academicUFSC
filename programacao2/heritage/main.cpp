#include "box.hpp"
#include "candyBox.hpp"

int main(int argc, char** argv) 
{
	// ------- Aula 05/10 ---------
	Box a;
	CandyBox b;
	
	a.setDimensions(10, 10, 10);
	b.setDimensions(10, 10, 15);
	b.setContent("Coffe candys");
	
	a.show();
	cout << endl;
	b.show();
	cout << endl;

	
	return 0;
}
