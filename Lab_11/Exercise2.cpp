#include <iostream>
#include "Queue_char.h"

int main(){

	Queue_char myQueue2;
	cout << "Function Call\tOutput\tQueue Content\n";
	cout << "dequeue()\t";

	try{
		char top = myQueue2.front();
		cout << boolalpha << myQueue2.dequeue() << "\t";
	}

	catch (int){
		cout << "exception";
	}

	myQueue2.print();

	cout << "enqueue(D)\t\t";
	myQueue2.enqueue('D');
	myQueue2.print();
	cout << "enqueue(A)\t\t";
	myQueue2.enqueue('A');
	myQueue2.print();
	cout << "dequeue()\t";

	try{
		char top = myQueue2.front();
		cout << boolalpha << myQueue2.dequeue() << "\t";	
	}



	catch (int){
		cout << "exception\n";
	}

	myQueue2.print();
	cout << "size()\t" << myQueue2.size() << "\t";
	myQueue2.print();
	cout << "enqueue(D)\t";
	myQueue2.enqueue('D');
	myQueue2.print();
	cout << "isEmpty()\t" << boolalpha << myQueue2.isEmpty() << "\t";
	myQueue2.print();
	cout << "front()\t" << myQueue2.front() << "\t";
	myQueue2.print();
	cout << "enqueue(T)\t\t";
	myQueue2.enqueue('T');
	myQueue2.print();
	cout << "front()\t\t" << myQueue2.front() << "\t";
	myQueue2.print();

	return 0;

}
