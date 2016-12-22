#ifndef QUEUE_CHAR_h
#define QUEUE_CHAR_h

#include "LinkedList_char.h"

using namespace std;

class Queue_char: public LinkedList_char{
	public:
		Queue_char();//constructor
		~Queue_char();//deconstructor
		void enqueue(int Engueue);//add to top
		char dequeue();//removes the top number
		char& front();

};

#endif
