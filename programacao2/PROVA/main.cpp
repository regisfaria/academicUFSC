#include "estrutura.hpp"
#include "stack.hpp"
#include "queue.hpp"
#include <string>

int main(int argc, int **argv)
{
	EstruturaDados *p = new EstruturaDados();
	cout << "Welcome to my data structure!" << endl;
	while(1)
	{
		//menu1
		cout << "Write 'stack' to use this structure" << endl;
		cout << "Write 'queue' to use this structure" << endl << endl;
		cout << "To leave the system use EOF(Ctrl + D)" << endl;
		string command;
		cin >> command;

		if(command.empty()) break;
		else if(command.at(0) == 's')
		{
			//menu2.stack
			cout << "We're now using the stack structure" << endl;
			int n=0;
			while(n != 5)
			{
				Stack *s = (Stack*) p;
				cout << "1 - Insert in stack" << endl;
				cout << "2 - Remove from stack" << endl;
				cout << "3 - Clear stack" << endl;
				cout << "4 - Print stack" << endl;
				cout << "5 - Return to the previus menu" << endl;
				
				cin >> n;
				switch(n)
				{
					case 1:
						int x;
						cout << "Please, write the value you wish to insert in the stack" << endl;
						cin >> x;
						//s.insert(x);
						s->insert(x);
						break;
					case 2:
						//s.remove();
						s->remove();
						break;
					case 3:
						//s.reset();
						s->reset();
						break;
					case 4:
						//s.print();
						s->print();
						break;
					case 5:
						break;
					default:
						cout << "Invalid option, please select a listed number." << endl;
				}
			}
		}
		else if(command.at(0) == 'q')
		{
			//menu2.queue
			cout << "We're now using the queue structure" << endl;
			int n=0;
			while(n != 5)
			{
				Queue *q = (Queue*) p;
				cout << "1 - Insert in queue" << endl;
				cout << "2 - Remove from queue" << endl;
				cout << "3 - Clear queue" << endl;
				cout << "4 - Print queue" << endl;
				cout << "5 - Return to the previus menu" << endl;
				
				cin >> n;
				switch(n)
				{
					case 1:
						int x;
						cout << "Please, write the value you wish to insert in the queue" << endl;
						cin >> x;
						//q.insert(x);
						q->insert(x);
						break;
					case 2:
						//q.remove();
						q->remove();
						break;
					case 3:
						//q.reset();
						q->reset();
						break;
					case 4:
						//q.print();
						q->print();
						break;
					case 5:
						break;
					default:
						cout << "Invalid option, please select a listed number." << endl;
				}
			}
		}
		else
		{
			cout << "I found a error :(" << endl << "Please, check if you are writting the correct option." << endl;
		}
	}
	cout << "See ya! ;)" << endl;
	delete p;

	return 0;
}