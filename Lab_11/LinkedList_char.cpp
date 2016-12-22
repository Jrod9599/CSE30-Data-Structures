#include "LinkedList_char.h" 
#include <iostream>

using namespace std; // Code modified to use characters

//Exercise 1
LinkedList_char::LinkedList_char() //default constructor {
	first = NULL;
	last = NULL;
}

LinkedList_char::~LinkedList_char(){
	clear();
}

void LinkedList_char::insertAtBack(char valueToInsert){

	Node* temp = new Node();
	temp->val = valueToInsert;

	if (first == NULL)
		first = temp;

	if (last == NULL)
		last = temp;

	else{
		last->next = temp;
		last = temp;
	}
}

bool LinkedList_char::removeFromBack(){
	Node * temp = first;

	if (first == last){
		delete last;
		first = NULL;
		last = NULL;
		return true;
	}

	if (last == NULL)
		return false;

	while(temp->next != last){
		temp = temp->next;
	}

	delete last; //remove the last node
	last = temp; //point "last" to temp
	return true;
}

void LinkedList_char::print(){
	if (first != NULL){
		Node * temp = first;
		while (temp != last){
			cout << (temp -> val) << ", ";
			temp = temp -> next;
		}
		if(temp == last)
			cout << (temp -> val);
	}
	else
		 cout << "";
}

bool LinkedList_char::isEmpty(){
	if(first == NULL && last == NULL)
		return true;
	else
		return false;
}

int LinkedList_char::size(){
	Node * temp;
	int Counter = 1; //start at one to count first node

	if (first == NULL && last == NULL)
		return 0;

	if(first == last)
		return 1;

	temp = first;

	while (temp != last){
		temp = temp->next;
		Counter++;
	}
	return Counter;
}

void LinkedList_char::clear(){
	while (!isEmpty()) //if there's still values in the list
		removeFromBack();	//remove them
}

//Exercise 2 
void LinkedList_char::insertAtFront(char valueToInsert){
	Node* temp = new Node();
	temp->val = valueToInsert;
	if (first == NULL)
		first = temp;
	if (last == NULL)
		last = temp;
	else{
		temp->next = first;	//add new node to front
		first = temp; 
	}
}
bool LinkedList_char::removeFromFront(){
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
	delete temp; //delete old front

	return true;
}
