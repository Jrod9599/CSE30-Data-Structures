#include<iostream>
#include<fstream>
using namespace std;


int checkArraySort(string * A, int array_size){
		int up=0, down=0;//used to check what direction the array is moving
		for(int i = 0; i < array_size-1; i++){
			if(A[i] < A[i+1])//ascending
				up ++;
			else if(A[i] > A[i+1])//decending
				down ++;
			}
		if(up == array_size-1)//ascending
			return 1;
		else if(down == array_size-1)//decending
			return -1;
		else//out of order
			return 0;
}

int main(){

	int counter = 0;

	bool check = true;
	//open file
	ifstream myfile_in;
	myfile_in.open ("words_in.txt");
	string line;
	while (check){
		getline(myfile_in, line);
		if (myfile_in.eof() == true)
			check = false;
		else
			counter++;
	}

	myfile_in.close();

	string* arr = new string [counter];
	cout << counter << endl;
	myfile_in.open ("words_in.txt");
	//pull information from line
	for (int i = 0; i < counter; i++){
		getline(myfile_in, arr[i]);
	}

	int order = checkArraySort(arr, counter);
	//calls functions and changes outcomebasesd on result
	if (order == -1)
		cout << "The array is sorted in descending order!" << endl;

	if (order == 0)
		cout << "The array is not sorted!" << endl;

	if (order == 1)
		cout << "The array is sorted in ascending order!" << endl;
	//print out
	for (int i = 0; i < counter; i++){
			cout << arr[i] << endl;
		}

	delete [] arr;
	myfile_in.close();
}
