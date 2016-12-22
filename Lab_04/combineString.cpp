# include <iostream>
#include<string>
using namespace std;

string combineStr(string x, int y){
	for(int i =1; i < y; i++){
		cout << x;
	}
	return x;
}

int main (){
	string Prompt;
	cout << "Enter a string" <<endl;
	cin >> Prompt;

	int x;
	cout << "Enter a number of times: " <<endl;
	cin >> x;
	
	if(x < 1)
		return 0;
	
	cout << "The Resulting string is: ";
	cout << combineStr(Prompt,x);
	return 0;
}
