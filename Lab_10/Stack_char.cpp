#include<iostream>
#include "Stack_char.h"

using namespace std;

Stack::Stack(){}

Stack::~Stack(){}

void Stack::push(char value){
	insertAtFront(value);
}

int Stack::pop(){
	removeFromFront();
}

char& Stack::top(){
	char *temp = new char;
	*temp = first->val;
	return *temp;
}
