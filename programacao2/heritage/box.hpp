#ifndef _BOX_
#define _BOX_

#include <iostream>
#include <stdlib.h>

using namespace std;

class Box
{
	protected:
		float m_width, m_height, m_depth;
	public:
		//constructors
		Box();
		Box(float w, float h, float d);
		//destructor
		~Box();
		
		//get's
		
		//methods
		void setDimensions(float w, float h, float d);
		void show();
		//operators methods				
};
#endif
