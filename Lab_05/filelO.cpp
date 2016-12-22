#include <iostream>
#include<fstream>
using namespace std;


int main(){
	
	//create arrays
	const int array_max=20;
	int arr[array_max];
	string line;
	
	//user input
	cout << "Enter beggining position to output: " << endl;
	int start, finish;
	cin >> start;
	cout << "Enter ending postition to output: " << endl;
	cin >> finish;

	//open files
	ifstream file;
	file.open("in.txt");

	if(file.is_open()) {
		for(int i = 0; i < array_max; i++){
			getline(file,line); //with each loop calls a different line
			if(i >= start && i <= finish)//prints out line within set range
				cout << line  << " ";
		}
		file.close();
	}
	else
		cout << "Unable to open file";


	return 0;
}
