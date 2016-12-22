#include "LinkedList.h"
#include <iostream>

using namespace std;

//exercise 1
LinkedList::LinkedList(){
	first=NULL;
	last = NULL;
}

LinkedList::~LinkedList(){
	clear();
}

void LinkedList::insertAtBack(int valueToInsert){
	Node* temp = new Node();
	temp -> value = valueToInsert;

	if(first == NULL)
		first = temp;
	if(last == NULL)
		last = temp;
	//attatch new value and move pointer
	else{
		last -> next = temp;
		last = temp;
	}
}

bool LinkedList::removeFromback(){
	Node *temp = first;

	if(first == last){
		delete last;
		first == NULL;
		last == NULL;
		return true;
	}

	if(last == NULL)
		return false;

	while(temp -> next != last){
		temp = temp-> next;
	}

	delete last;
	last = temp;
	return true;
}

void LinkedList::print(){
	if(first != NULL){
		Node * temp = first;
		while(temp != last){
			cout << (temp ->) << ", ";
			temp = temp -> next;
		}
		if(temp == last)
			cout <<  (temp -> value);
	}
}

bool LinkedList::isEmpty(){
	if(first == NULL && last == NULL)
		return true;
	else
		return false;
}

int LinkedList::size(){
	Node * temp;
	int Counter = 1; 
	if (first == NULL && last == NULL)
		return 0;
	if(first == last)
		return 1; //if equal, 1 node
	temp = first;

	while (temp != last){
		temp = temp->next;
		Counter++;
	}

	return Counter;
}

void LinkedList::clear(){
	while (!isEmpty()) //if there's still values in the list
		removeFromBack();	//remove them
}

void LinkedList::insertAtFront(int valueToInset){
	Node* temp = new Node();
	temp->value = valueToInsert;
	if (first == NULL)
		first = temp;
	if (last == NULL)
		last = temp;
	else{
		temp->next = first;	//add new node to front
		first = temp; //move the "first" pointer to the new node
	}
}

bool LinkedList::removeFromFront(){
	Node * temp = first;
	if (first == last){
		delete last;
		first = NULL;
		last = NULL;
		return true;
	}

	if (first == NULL)
		return false;

	first = first->next; //move "first" pointer to the next value
	delete temp; 
	return true;
}
