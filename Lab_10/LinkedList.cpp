#include "LinkedList.h"
#include <iostream>


using namespace std;

LinkedList::LinkedList(){
	first = NULL;
	last = NULL;
}

//empty list
LinkedList::~LinkedList(){
	clear();
}

//insert at front
void LinkedList::insertAtFront(int beginning){

	Node *temp = new Node();
	temp->val = beginning;
	if (first == NULL)
		first = temp;
	if (last == NULL)
		last = temp;
	else{
		temp->next = first;
		first = temp;
	}
}

//inset at back
void LinkedList::insertAtBack(int end){
	Node *temp = new Node();
	temp->val = end;
	if (first == NULL)
		first = temp;
	if (last == NULL)
		last = temp;
	else{
		last->next = temp;
		last = temp;
	}
}


bool LinkedList::removeFromFront(){ //removes value from the front

	if (first == NULL)
		return false;
	if (first == last){
		delete first;
		first = NULL;
		last = NULL;
		return true;
	}

	Node *temp = first;
	temp = first->next;
	delete first;
	first = temp;
	return true;

}


bool LinkedList::removeFromBack(){

	cout << "remove" << endl;

	if (last == NULL)
		return false;
	if (first == last){
		delete first;
		first = NULL;
		last = NULL;
		return true;
	}

	Node *temp = first;
	while (temp->next != last)
	{
		temp = temp->next;
	}
	delete last;
	last = temp;
	return true;
}

bool LinkedList::isEmpty(){
	if (first == NULL){
		return true;
	}
	else{
		return false;
	}
}
void LinkedList::print(){
	if (first != NULL){
		Node *temp = first;
		while (temp != last){
			cout << temp->val << ", ";
			temp = temp->next;
		}
		cout << temp->val;
	}
	else
		cout << "";
}
int LinkedList::size(){
	if (first == NULL){
		return 0;
	}
	Node *temp = first;
	int count = 1;
	while (temp != last){
		temp = temp->next;
		count++;
	}
	return count;
}

void LinkedList::clear(){
	if (first != NULL){
		Node *temp = first; 
		while (temp != last){
			first = first->next;
			delete temp;
			temp = first;
		}
		delete last;
		first = NULL;
		last = NULL;
	}
}

