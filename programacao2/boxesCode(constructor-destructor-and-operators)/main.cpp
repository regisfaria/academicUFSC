#include "box.hpp"
#include "candyBox.hpp"

int main(int argc, char** argv) 
{
	/* ----- Aula 28/09 ------- SEPARAR ESSE MAIN DEPOIS
	Box a;
	Box b(2,2,2);
	Box c(a);
	Box d(1,5,2.797);
	Box e(d+a);
	Box f = d;
	Box g = b+d;
	Box h = d*3;
	
	cout << "Number of Boxes is " << h.getNumberOfBoxes() << endl;
	cout << "Box A has volume of " << a.getVolume() << endl;
	cout << "Box B has volume of " << b.getVolume() << endl;
	cout << "Box C has volume of " << c.getVolume() << endl;
	cout << "Box D has volume of " << d.getVolume() << endl;
	cout << "Box E has volume of " << e.getVolume() << endl;
	cout << "Box F has volume of " << f.getVolume() << endl;
	cout << "Box G has volume of " << g.getVolume() << endl;
	cout << "Box H has volume of " << h.getVolume() << endl;
	
	cout << endl << endl;
	
	cout << "Box A++" << endl;
	cout << "Box B--" << endl;
	a++;
	b--;
	
	cout << endl << endl;
	
	cout << "New volume of Box A " << a.getVolume() << endl;
	cout << "New volume of Box B " << b.getVolume() << endl;
	
	//chamada de destrutor também é possivel atraves de a.~Box();
	cout << endl << endl;
	
	cout << "Box A is bigger then Box B: " << (a > b) << endl;
	cout << "Box B is bigger then Box A: " << b.isBigger(a) << endl;
	cout << endl << endl;
	*/
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
