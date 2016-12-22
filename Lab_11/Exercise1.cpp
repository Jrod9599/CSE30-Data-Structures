#include<iostream>
#include "Queue.h"

using namespace std;

int main(){
	Queue myQueue;

	try{
		myQueue.front();
	}

	catch(int i){
		cout << "call front (), generate exception" << endl;
	}

	try{
		myqueue.dequeue();
	}

	catch(int j){
		cout << "Call dequeue(), generate exception" << endl;
	}

	myQueue.enqueue(1);
	cout << myQueue.front()<<endl;
	myQueue.enqueue.front(2);
	myQueue.print();
	myQueue.enqueue.front(3);
	myQueue.enqueue.front(4);
	myQueue.enqueue.front(5);
	myQueue.enqueue.front(6);
	cout << myQueue.front() << endl;
	myQueue.enqueue.front(7);
	myQueue.print();
	myQueue.enqueue.front(8);
	myQueue.enqueue.front(9);
	myQueue.enqueue.front(10);
	cout << myQueue.front() << endl;
	myQueue.print();
	cout << endl;


	cout << "Queue empty? " << boolalpha << myQueue.isEmpty() << endl;

	cout << "There are " << myQueue.size() << " elements." << endl;

	while (!myQueue.isEmpty()){
		try{
			int f = myQueue.front();
			cout << "\"" << f << "\"" << " currently at the front. ";
			cout << "Now dequeueing " << "\"" << myQueue.dequeue() << "\"" << endl;
		}
		catch (int){
			cout << "Call to dequeue() generated an exception, because the queue is empty" << endl;
			break;
		}
	}
	cout << "Queue empty? " << boolalpha << myQueue.isEmpty() << endl;
	return 0;
}
