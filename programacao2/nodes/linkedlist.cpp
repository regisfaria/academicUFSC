#include "linkedlist.hpp"

LinkedList::LinkedList()
{
	m_head = NULL;
	m_tail = NULL;
}

LinkedList::~LinkedList()
{
	if(!m_head) return;
	Node* currNode = m_head;
	while(currNode)
	{
		Node* ref = currNode->m_next;
		delete currNode;
		currNode = ref;
	}
}

void LinkedList::insertNode(Node* node)
{
	if(m_head == NULL)
	{
		m_head = node;
		m_tail = node;
	}
	else
	{
		node->m_prior = m_tail;
		m_tail->m_next = node;
		m_tail = node;
	}
}

void LinkedList::printElements()
{
	Node* currNode = m_head;
	while(currNode)
	{
		cout << "Element is: " << currNode->printElement() << endl;
		currNode = currNode->m_next;
	}
}
