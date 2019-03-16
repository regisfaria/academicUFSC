#include <iostream>
#include <stdlib.h>

using namespace std;

class Box
{
	public:								//era private
		float m_width, m_height, m_depth;
		static unsigned int m_numberOfBoxes;
	public:
		//constructors
		Box() : m_width(1), m_height(1), m_depth(1) { m_numberOfBoxes++; };
		Box(float w, float h, float d) : m_width(w), m_height(h), m_depth(d) {m_numberOfBoxes++;};
		Box(const Box &a); 															//Construtor de construtor, só é possivel se usar referencia para ele "&"(simbolo de referencia) e com const(para não acessar os member).
		//destructor
		~Box() { cout << "Ohhh man, I'm dying!!!" << endl;};
		
		//get's
		float getVolume() 		const;
		float getWidth()		const {return m_width; };
		float getHeight()		const {return m_height; };
		float getDepth()		const {return m_depth; };
		int getNumberOfBoxes()  const {return m_numberOfBoxes; };
		
		//methods
		bool isBigger(const Box &b);
		
		//operators methods
		bool operator >(const Box &a);  	
		bool operator <(const Box &a);  	
		bool operator ==(const Box &a);		
		Box operator =(const Box &a);		
		Box operator =(float n);				
		Box operator +(const Box &a);   		
		Box operator +(float n); 			
		Box operator -(const Box &a);		
		Box operator -(float n);				
		Box operator *(const Box &a);		
		Box operator *(float n);				
		Box operator /(const Box &a);		
		Box operator /(float n);				
		void operator ++();
		void operator --();
		void operator ++(int);				
		void operator --(int);					
};

