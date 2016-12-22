# include <iostream>
# include <string>
using namespace std;

void sortArr(int order, int arr[], int size){
	for(int i = 0; i<size; i++){
		for(int j = i+1; j<size; j++){//forward or backward
			if(order == 0){
				if(arr[i] > arr[j]){
				int t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
				}
			}
			else{
				if(arr[i] < arr[j]){
				int t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
				}
			}
		}
	}
}
int main(){ cout << "Enter the size of the array" << endl; 
int size; 
cin >> size;

//error check 
if(size < 1){
	cout << "ERROR: you entered an incorrect value for the array size!" << endl;
	return 0;
	}

//get input 
int arr[size]; cout << "Enter the numbers in the array, seperated by a space, and press enter: " << endl; 
for(int i =0; i <size; i++){
	cin >> arr[i];
}

//what do they want to do? 
int order; 
cout << "Sort in ascending (0) or descending (1) order? " << endl;
cin >> order; 
sortArr(order, arr, size); 

//conditioning output 
if(order == 0)
	cout << "This is the sorted array in ascending order: " << endl; 
else
	cout << "This is the sorted array in descending order: " <<endl; 

//print 
for(int i = 0; i <size; i++){
	cout << arr[i];
}
return 0;
}
