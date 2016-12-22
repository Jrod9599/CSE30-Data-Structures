#ifndef QUEUE_h
#define QUEUE_h

#include "LinkedList.h"

using namespace std;

class Queue : public LinkedList{
	public:
		Queue();
		~Queue();
		void engueue(int valueToEnqueue);
		int dequeue();
		int& front();
};

#endif
