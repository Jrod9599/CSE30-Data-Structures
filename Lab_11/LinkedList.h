#ifndef LinkedList_H
#define LinkedList_H

using namespace std;

struct Node{
	int value; //value of node
	Node *next; //pointer to following node
};

class LinkedList{
	public:
		LinkedList();//constructor
		~LinkedList();//and deconstructor
		void insertAtBack(int valueToInsert);
		bool removeFromBack();
		void print();
		bool isEmpty();
		int size;
		void clear();

		//exercise 2 functions
		void insetAtFront(int valueToInsert);
		bool removeFromFront();

	protected:
		Node *first;
		Node *last;
};

#endif
