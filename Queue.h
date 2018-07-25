#pragma once
//TemplateQueue.h specification file
//This is the template for Queue class

#include<iostream>
#include<string>

using namespace std;

#ifndef QUEUE_H
#define QUEUE_H

template <class T>
class Queue
{
	private:
	//Structure for the queue nodes
		struct QueueNode 
		{
			T value; //Value in the node
			QueueNode *next;
		};
		QueueNode *front; //front of the queue;
		QueueNode *rear;   // The rear of the queue
		int numItems;      // Number of items in the queue
   public:

	   Queue();

	   // Destructor
	   ~Queue();

	   // Queue operations
	   void enqueue(T);
	  T dequeue();
	   void displayQueue();
	   bool isEmpty() const;
	   int GetNumItems()
	   {
		   return numItems;
	   }

	   void clear();


};

# endif