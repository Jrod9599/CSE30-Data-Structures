#include<iostream>
#include"Stack.h"

using namespace std;

int main(){
	Stack stack1;

	stack1.push(1);
	stack1.push(2);
	stack1.push(3);
	stack1.push(4);
	stack1.push(5);
	stack1.push(6);
	stack1.push(7);

	int check1;
	check1 = stack1.top();
	cout << check1 << endl;

	int check2;
	check2 = stack1.size();
	cout << check2 << endl;

	stack1.pop();
	stack1.pop();

	if(stack1.isEmpty())
		cout << "List 1 is empty" << endl;
	else
		cout << "List 1 is not empty" << endl;

	cout << "Stack: ";
	stack1.print();

	return 0;
}
