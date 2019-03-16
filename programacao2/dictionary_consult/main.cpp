#include "dict.hpp"

int main()
{
	vector < string > dictionary = ReadDict("dict.txt");
	cout << "Dictionary size is " << dictionary.size() << endl;
	
	for(int i=0; i<dictionary.size(); i++)
	{
		cout << dictionary.at(i) << " ---->" << endl;
	}
	string query = "zysk";
	if(Search(dictionary, query))
	{
		cout << "Yes, "<< query << " is in the dictionary" << endl;
	}
	
	return 0;
}
