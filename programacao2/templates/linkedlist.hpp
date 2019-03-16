#include <iostream>
#include <stdlib.h>
#include "node.hpp"

using namespace std;

template <class T> class LinkedList
{
	private:
		Node<T>* m_head;
		Node<T>* m_tail;
	public:
		LinkedList() : m_head(NULL), m_tail(NULL) {};
		~LinkedList();	//implementar
		
		void include(T node)
}; 
