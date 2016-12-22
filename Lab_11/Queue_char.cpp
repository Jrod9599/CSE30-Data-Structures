#include<iostream>
#include"Queue_char.h"

using namespace std;

Queue_char::Queue_char():LinkedList_char(){}//does nothing

Queue_char::~Queue_char()()//again does nothing

void Queue_char::enqueue(int Enqueue){
	insertAtBack(Enqueue)
}

char Queue_char::deueue(){
	if(isEmpty())
		throw 20;
	char temp = first-> val;
	removeFromFront();

	return temp;
}

char& Queue_char::front(){
	if(isEmpty())
		throw 10;
	return first -> val;
}
