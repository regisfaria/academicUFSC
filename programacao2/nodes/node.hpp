#include <iostream>
#include <stdlib.h>
#include <sstream>

using namespace std;

struct datatype
{
	int* m_datai;
  	char* m_datac;
	float* m_dataf;
   	double* m_datad;
   	string* m_datas;
	bool* m_datab;	
};

class Node
{
	private:
		struct datatype m_data;
	public:
    	Node *m_next;
    	Node *m_prior;
		//constructors
		Node();
   		Node(int v) : Node()        {  m_data.m_datai = new int(v); };
	    Node(float v) : Node()      {  m_data.m_dataf = new float(v); };
	    Node(double v) : Node()     {  m_data.m_datad = new double(v); };
	    Node(char v) : Node()       {  m_data.m_datac = new char(v); };
	    Node(string v) : Node()     {  m_data.m_datas = new string(v); };
	    Node(bool v) : Node()       {  m_data.m_datab = new bool(v); };
	    //destructors
		~Node() { cout << "Ohhh man, I'm dying!!!" << endl;};
		//methods
		string printElement();
};
