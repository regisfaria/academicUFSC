#include <iostream>
#include <stdlib.h>

using namespace std;

class Point
{
	public:
		unsigned int m_x, m_y;
		Point() {};
		Point(unsigned int x, unsigned int y) : m_x(x), m_y(y) {};
};

template<class T> class Node
{
	private:
		T m_data;
		static unsigned int m_counterT;
	public:
		Node()			{};
		Node(const T &v) : Node()	{ m_data = v; }
};

template<class T> unsigned int Node<T>::m_counterT = 0;

int main()
{
	Node<string> a("Hello, I'm a pointer");
	Node<int> b(10);
	Node<float> c(3.14);
	
	Point pt(10, 10);
	Node<Point> d(pt);
	
	return 0;
}
