#include "dict.hpp"

vector< string > ReadDict(string filepath)
{
	ifstream file;
	file.open(filepath.c_str());
	vector< string > data;
	
	if(file.is_open())
	{
		string tmp;
		while(getline(file, tmp))
		{
			data.push_back(tmp);
		}
	}
	else
	{
		cout << "Error, file cannot be loaded" << endl;
		return data;
	}
	data.erase(data.begin());
	
	file.close();
	return data;
}

bool Search( vector< string > dictionary, string query )
{
	bool find = false;
	for(int i=0; i<dictionary.size(); i++)
	{
		if(dictionary.at(i) == query)
		{
			return true;
		}
	}
	return false;
}
