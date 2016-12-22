#include "Stack.h"
#include <iostream>

#include "LinkedList_char.h"

using namespace std;

//all the functions from the header file
Stack::Stack(){}

Stack::~Stack(){}

void Stack:: push(int front){
	insertAtFront(value);//call function from 
}

int Stack:: pop(){
	removeFromFront();
}

int& Stack:: top(){
	int *reference = new int; //yes *reference is a bit of a contradiction
	*reference = first->val;
	return *reference;

}
