#include "Counter.hpp"

int main(int argc, char * argv[])
{
	Counter myCounter;
	
	myCounter.Reset();
	myCounter.Increment();
	myCounter.Print();
	
	return 0;
}
