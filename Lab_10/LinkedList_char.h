#ifndef LinkList_CH
#define LinkedList_CH

using namespace std;

struct Node{
	char val; //value of node
	Node *next; //pointer
};

class LinkedList{
	public:
		LinkedList();
		~LinkedList();
		void insertAtBack(char valueToInsert);
		bool removeFromBack();
		void print();
		bool isEmpty();
		int size();
		void clear();
	//ex 2 functions
		void insertAtFront(char valueToInsert);
		bool removeFromFront();

	protected:
		Node *first;
		Node *last;
};

#endif
