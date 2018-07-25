//Queue.cpp 

//This is the specification file of the template class Queue.
#include <iostream>
#include "Queue.h"
#include <cstdlib>
#include<string>

using namespace std;


//********************************************
// The constructor creates an empty queue.   *
//********************************************
template<class T>
 Queue<T>::Queue()
{
	front = 0;
	rear = 0;
	numItems = 0;
}

//********************************************
// Destructor                                *
//********************************************

template <class T>
Queue<T>::~Queue()
{
	cout << "In the destructor.\n";
	while (!isEmpty())
	{
		cout << "deleting...\n";
		dequeue();
	}
}
//********************************************
// Function enqueue inserts the value in num *
// at the rear of the queue.                 *
//********************************************

template <class T>
void Queue<T>::enqueue(T val)
{

	QueueNode *newNode;

	// Create a new node and store num there.
	newNode = new QueueNode;
	newNode->value = val;
	newNode->next = 0;

	// Adjust front and rear as necessary.
	if (isEmpty())
	{
		front = newNode;
		rear = newNode;
	}
	else
	{
		rear->next = newNode;
		rear = newNode;
	}

	// Update numItems.
	numItems++;
}

//**********************************************
// Function dequeue removes the value at the   *
// front of the queue, and copies it into num. *
//**********************************************

template <class T>
T Queue<T>::dequeue()
{

	QueueNode *temp;
	T num;
	if (isEmpty())
	{
		cout << "The queue is empty.\n";
		exit(EXIT_FAILURE);
	}
	else
	{
		// Save the front node value in num.
		num = front->value;

		// Remove the front node and delete it.
		temp = front;
		front = front->next;
		delete temp;

		// Update numItems.
		numItems--;
	}
	return num;
}

//*********************************************
// Function isEmpty returns true if the queue *
// is empty, and false otherwise.             *
//*********************************************

template <class T>
bool Queue<T>::isEmpty() const
{

	bool status;

	if (numItems > 0)
	{
		status = false;
	}
	else
	{
		status = true;
	}
	return status;
}

//********************************************
// Function clear dequeues all the elements  *
// in the queue.                             *
//********************************************

template <class T>
void Queue<T>::clear()
{

	while (!isEmpty())
	{
		dequeue();
	}
}


template <class T>
void Queue<T>::displayQueue()
{
	QueueNode *temp;
	temp = front;
	if (!temp)
	{
		cout << "Empty Queue";
	}
	else
		do
		{
			cout << temp->value << "\n";
			temp = temp->next;
		} while (temp);

}













