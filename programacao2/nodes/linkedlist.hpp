#include <iostream>
#include <stdlib.h>
#include "node.hpp"

using namespace std;

class LinkedList
{
	private:
		Node* m_head;
		Node* m_tail;
	public:
		//constructor
		LinkedList();
		//destructor
		~LinkedList();
		//methods
		void insertNode(Node* node);
		void printElements();
};
