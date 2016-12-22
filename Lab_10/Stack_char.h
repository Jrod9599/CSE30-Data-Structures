#include<string>
#include "LinkedList_char.h"

class Stack : public LinkedList {
	public:
		Stack();
		~Stack();
		void push(char value);
		int pop();
		char& top();

};
