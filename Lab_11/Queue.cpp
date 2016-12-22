#include "Queue.h"
#include"<iostream>

using namespace std;

Queue::Queue():LinkedList(){} // does nothing

Queue::~Queue(){} //also does nothing

void Queue::enqueue(int valueToEnqueue){
	insertAtBack(valueToEnqueue);
}

int Queue::dequeue(){
	if(isEmpty())
		throw 20;
	int temp = first -> value;
	removeFromFront();
	return temp;
}

int& Queue::front(){
	if(isEmpty())
		throw 10;
	return first->val;
}
