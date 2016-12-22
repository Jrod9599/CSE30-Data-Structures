#include <iostream>
#include<fstream>
using namespace std;

int binarySearch(string *a, int first,int last, string k){
	int middle = ((first+last) / 2);
	int value = a[middle];
	//need statement for when it cannot find it
	if(middle == first || middle == last)
		return 0;
	//recursion
	else if(value > k)
		return binarySearch( a, first, middle-1,k);
	else if(value < k)
		return binarySearch(a, middle+1, last,k);
	else
		return middle;
}

int main(){

	//initializing array
        const int array_max=20;
        int *arr[] = array_max;

	//opeing file
        ifstream file;
        file.open("words_in.txt");

	  if(file.is_open()) {
                for(int i = 0; i < array_max; i++){
                        file >> arr[i];
               }
                file.close(); //close after finished
        }
        else
                cout << "Unable to open file";

	//search key
	string k;
	cout << "Input search key (k)";
	cin >> k;
	int index = binarySearch(arr,0,20, k);
	if(index > 0)
		cout << "Found key " << k << " at index " << index << endl;
 	else
		cout << "Could not find key" << endl;
	return 0;
}
