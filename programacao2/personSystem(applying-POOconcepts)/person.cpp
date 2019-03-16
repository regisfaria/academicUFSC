#include "person.hpp"

void deletePerson(string filename, string person)
{
	vector< string > data;
	ifstream filer(filename.c_str());
	if(filer == NULL)
	{
		cout << "Error, can't acess the database." << endl;
		return;
	}
	
	string tmp;
	while(getline(filer, tmp))	//le o arquivo
	{
		data.push_back(tmp);
	}
	filer.close();
	
	string type;
	cout << "The person you want to remove is a juridical or physical person?(write '#j' or '#f' respectively)" << endl;
	cin >> type;
	for(int i=0; i<data.size(); i++)	//procurar e remove a pessoa
	{
		tmp = data.at(i);
		if(tmp.find(person) != std::string::npos)
		{
			if(type == "#j")
			{
				data.erase (data.begin()+i, data.begin()+i+7);
			}
			else
			{
				data.erase (data.begin()+i, data.begin()+i+6);
			}
		}
	}
	
	ofstream filew(filename.c_str());
	if(filew == NULL)
	{
		cout << "Error, can't acess the database." << endl;
		return;
	}
	
	for(int i=0; i<data.size(); i++)	//salva a nova db
	{
		filew << data.at(i) << endl;
	}
	filew.close();
	cout << person << " was successfully removed from the list." << endl;
}

void searchPerson(string filename, string person)
{
	vector< string > data;
	ifstream file(filename.c_str());
	if(file == NULL)
	{
		cout << "A problem was found during the acess phase, please try again later." << endl;
		return;
	}
	string tmp;
	int matches=0;
	while(getline(file, tmp))
	{
		data.push_back(tmp);
	}
	for(int i=0; i<data.size(); i++)
	{
		tmp = data.at(i);
		if(tmp.find(person) != std::string::npos)
		{
			cout << tmp << endl;
			matches++;
		}
	}
	if(matches == 0)
	{
		cout << "No name was found with the '" << person << "' query." << endl;
	}
	file.close();
}

void listAlphabetical(string filename)
{
	vector< string > data;
	ifstream file(filename.c_str());
	if(file == NULL)
	{
		cout << "A problem was found during the reading process." << endl;
		return;
	}
	
	string tmp;
	while(getline(file, tmp))
	{
		data.push_back(tmp);
	}
	
	sort(data.begin(), data.end());
	string tmp2;
	int c= 0;
	cout << string(50, '\n');
	for(int i=0; i<data.size(); i++)
	{
		tmp2 = data.at(i);
		if(tmp2.find("#") == std::string::npos)
		{
			cout << tmp2 << endl;
			c++;
		}
		if(c == 0) cout << "No name was found in the database." << endl;
	}
}

void listGroupAlphabetical(string filename)
{
	vector< string > data;
	ifstream file(filename.c_str());
	if(file == NULL)
	{
		cout << "A problem was found during the reading process." << endl;
		return;
	}
	
	string tmp;
	while(getline(file, tmp))
	{
		data.push_back(tmp);
	}
	vector< string > juridical;
	vector< string > phisical;
	for(int i=0; i<data.size(); i++)
	{
		tmp = data.at(i);
		if(tmp == "#j") juridical.push_back(data.at(i-1));
		if(tmp == "#f") phisical.push_back(data.at(i-1));
	}
	int c=0;
	sort(juridical.begin(), juridical.end());
	sort(phisical.begin(), phisical.end());
	
	cout << string(50, '\n');
	cout << "Phisical persons:" << endl;
	for(int j=0; j<phisical.size(); j++)
	{
		tmp = phisical.at(j);
		cout << tmp << endl;
		c++;
	}
	cout << endl;
	cout << "Juridical persons:" << endl;
	for(int w=0; w<juridical.size(); w++)
	{
		tmp = juridical.at(w);
		cout << tmp << endl;
		c++;
	}
	cout << endl << endl << endl << endl;
	if(c == 0) cout << "No name was found in the database." << endl;
}
