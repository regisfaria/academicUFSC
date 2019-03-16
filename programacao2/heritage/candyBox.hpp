#ifndef _CANDYBOX_
#define _CANDYBOX_

#include "box.hpp"
#include <string>

using namespace std;

class CandyBox : public Box
{
	protected:
		string m_content;
	public:
		//constructors
		CandyBox();
		//destructors
		~CandyBox();
		//methods
		void setContent(string name);
		void show();
		//get's
};

#endif
