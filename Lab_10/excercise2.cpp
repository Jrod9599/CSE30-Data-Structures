#include <iostream>
#include "Stack_char.h"

using namespace std;

int main () {
	Stack stack1;

	if(stack1.isEmpty())
		cout << "True" << endl;
	else
		cout << "false" << endl;

	stack1.push('A');
	stack1.push('Y');

	int check;
	check = stack1.size();

	stack1.pop();

	if(stack1.isEmpty())
		cout << "true" << endl;
	else
		cout << "false" << endl;

	stack1.push('D');
	stack1.top();
	stack1.push('T');
	stack1.pop();

return 0;
}
