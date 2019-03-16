#include "person.hpp"
#include "jperson.hpp"
#include "fperson.hpp"

int main(int argc, char* argv[])
{
	int num;
	seven:
	cout << "Welcome to our system!!" << endl << endl;
	cout << "*please, use the numbers to navigate the system*" << endl;
	cout << "1) Insert physical person." << endl;
	cout << "2) Insert juridical person." << endl;
	cout << "3) Remove person." << endl;
	cout << "4) Search name." << endl;
	cout << "5) List alphabetic." << endl;
	cout << "6) List alphabetic by group order(physical and juridical)." << endl;
	cout << "7) Logout." << endl;
	cin >> num;
	string query;
	
	switch(num)
	{
		case 1:
			insertFperson(argv[1]);
			break;
		case 2:
			insertJperson(argv[1]);
			break;
		case 3:
			cout << "What is the name of the person you want to remove?(Please use uppercase letter as usual in names)" << endl;
			cin >> query;
			deletePerson(argv[1], query);
			break;
		case 4:
		 	cout << "What is the name you want to search in our database?" << endl;
		 	cin >> query;
		 	searchPerson(argv[1], query);
		 	break;
		case 5:
			listAlphabetical(argv[1]);
			break;
		case 6:
			listGroupAlphabetical(argv[1]);
			break;
		case 7:
			cout << "Thank you for using our system!" << endl;
			break;
		default :
			cout << "Error, number used is invalid" << endl;
			break;
	}
	if(num != 7) goto seven;
	
	return 0;
}
