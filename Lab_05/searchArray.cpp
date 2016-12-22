#include <iostream>
#include<fstream>
using namespace std;

int checkArraySort(int a[],int  array_max){

                int up=0, down=0;
                for(int i = 0; i < array_max-1; i++){
                        if(a[i] < a[i+1])
                                up ++;
                        else if(a[i] > a[i+1])
                                down ++;
                        }

                if(up == array_max-1)
                        return 1;
                else if(down == array_max-1)
                        return -1;
                else
                        return 0;
        }
int binarySearch(int a[],int first, int last, int k){

	int middle = ((first + last) / 2);

	int value = a[middle];

	//need statement for when it cannot find it
	if(middle == first || middle == last)
		return 0;
	//recursion
	if(value > k)
		return binarySearch( a, first, middle-1,k);
	if(value < k)
		return binarySearch(a, middle+1, last,k);
	else
		return middle;
}

int main(){
        //initializing array
        const int array_max=20;
        int arr[array_max];

        //opeing file
        ifstream file;
        file.open("in.txt");

        if(file.is_open()) {
                for(int i = 0; i < array_max; i++){
                        file >> arr[i]; 
               }
                file.close(); //close after finished
        }
        else
                cout << "Unable to open file";

	//makes it easier for execution in "if" statements
        int returnValue = checkArraySort(arr, array_max);

	if(returnValue == 0){
		cout << "ERROR, array is not sorted" << endl;
		return 0;
	}

	//search key
	int k;
	cout << "Input search key (k)";
	cin >> k;

	int index = binarySearch(arr,0,19, k);

	if(index >  0)
		cout << "Found key " << k << " at index " << index << endl;
 	else
		cout << "Could not find key" << endl;
	return 0;
}
