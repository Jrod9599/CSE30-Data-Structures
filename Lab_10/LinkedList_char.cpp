#include "LinkedList_char.h"
#include <iostream>

using namespace std; 

LinkedList::LinkedList(){
	first = NULL;
	last = NULL;
}

LinkedList::~LinkedList(){
	clear();
}

void LinkedList::insertAtBack(char valueToInsert){

	Node* newNode = new Node;
	newNode->val = valueToInsert;
	newNode->next = NULL;

	if (last != NULL) 
		last->next = newNode;
	else
		first = newNode;
	last = newNode;
}

bool LinkedList::removeFromBack(){
	if (last == NULL) {
		return false;
	}
	if (last != first) {
		Node* temp = new Node;
		temp = first;
		while (temp->next->next != NULL) {
			temp = temp->next;
		}
		last = temp;
		delete temp->next;
		temp->next = NULL;
		return true;
	}
	else {
		delete first;
		first = NULL;
		last = NULL;
		return true;
	}
}

void LinkedList::print(){
	Node* temp = new Node;
	temp = first;
	while (temp != NULL) {
		cout << temp->val;
		if (temp->next != NULL) {
			cout << ",";
		}
		temp = temp->next;
	}
}

bool LinkedList::isEmpty(){
	return (first == NULL);
}

int LinkedList::size(){

	if (first == last) {
		if (first == NULL)
			return 0;
		else
			return 1;
	}
	else{
		int size = 1;
		Node* temp = new Node;
		temp = first;
			while (temp->next != NULL){
				size++;
				temp = temp->next;
			}
		return size;
	}
}

void LinkedList::clear(){
	Node*temp = new Node;
	while (first != NULL) {
		temp = first->next;
		delete first;
		first = temp;
	}
	first = NULL;
	last = NULL;
}

void LinkedList::insertAtFront(char valueToInsert){
	Node* newNode = new Node;
	newNode->val = valueToInsert;
	newNode->next = first;
	first = newNode;
}

bool LinkedList::removeFromFront(){
	if (first == NULL) {
		return false;
	}
	if (last != first) {
		Node* temp = new Node;
		temp = first->next;
		delete first;
		first = temp;
		return true;
	}
	else {
		// There is one node.
		delete first;
		first = NULL;
		last = NULL;
		return true;
	}
}
