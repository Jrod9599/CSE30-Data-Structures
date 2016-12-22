#ifndef LINKEDLIST_h
#define LINKEDLIST_h

using namespace std;

struct Node{
	char val;
	Node *next;
};

class LinkedList_char{
	public:
		LinkedList_char();//constructor
		~LinkedList_char();//deconstructor
		void insertAtBack(char valueToInsert);
		bool removeFromBack();
		void print();
		bool isEmpty();
		int size();
		void clear();

		//exercise2
		void insertAtFront(char valueToInsert);
		bool removeFromFront();

	protected:
		Node *first;//point to front of list
		Node *last; //point at end of list
};

#endif
