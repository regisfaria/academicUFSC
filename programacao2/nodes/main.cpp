#include "linkedlist.hpp"


int main(int argc, char *argv[])
{
    Node* a = new Node('a');
    Node* b = new Node(10);
    Node* c = new Node((float)10.0);
    Node* d = new Node((string)"aiaiai");
    Node* e = new Node((string)"xxxxxx");

    
    LinkedList list;
    list.insertNode(a);
    list.insertNode(b);
    list.insertNode(c);
    list.insertNode(d);
    list.insertNode(e);
    list.insertNode( new Node((string) "I'm a node") );
    list.insertNode( new Node((string) "I'm a node too") );
    list.printElements();
}
