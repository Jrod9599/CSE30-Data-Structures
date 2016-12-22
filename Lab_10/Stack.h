#ifndef Stack_H
#define Stack_H
#include "LinkedList.h"

class Stack:public LinkedList{
	public:
		Stack();//constructor
		~Stack();//deconstructor
		void push(int value);
		int pop();
		int& top();
};

#endif
