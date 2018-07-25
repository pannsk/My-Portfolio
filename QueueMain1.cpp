//QueueMain1.cpp
//This is the driver program to test the template of Queue class.
#include "Queue.cpp"
#include<string>
using namespace std;

int main()
{
	//declare instances of Template class Queue
	Queue<int> myqueue1;
	
	//*******************************
	//enqueue integer values in Queue
	//********************************
	cout << "Test for integer values.\n";
	//enqueue 10
	myqueue1.enqueue(10);
	//enqueue 15
	myqueue1.enqueue(15);
	//enqueue 20
	myqueue1.enqueue(20);

	//display numItems
	cout << "There are " << myqueue1.GetNumItems() << " items in the queue.\n";

	//display
	myqueue1.displayQueue();

	while (!myqueue1.isEmpty())
	{
		//remove an item
		cout << "Removing...";
		cout << myqueue1.dequeue();
		cout << endl;
	}


	cout << "Removing:" << myqueue1.dequeue() << endl;
	cout << endl << endl;

	return 0;
}