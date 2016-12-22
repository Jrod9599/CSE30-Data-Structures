
#include <iostream>
using namespace std;

int main(){

cout << "Enter the size of the array: ";
int size;
cin >> size;
	if(size < 1){
		cout << "ERROR: you entered an incorrect value for the array size!" << endl;
		return 0; // simple check to make sure its a non negative number and program closes
	}
int arr[size];

cout << "Enter the numbers in the array, seperated by a space, and press enter: "; 
for(int i =0; i <size; i++){
	cin >> arr[i];//fill in array
}
//which number to look for
int v;
cout << "Enter the number to search for in the array ";
cin >> v;

int x=0;
//search algorythm
for(int i =0; i <size; i++){
		x++;
		if( v == arr[i]){
			cout << "Found the value " << v << " at index " << i << ", which took " << x << " checks." <<endl;	
				if(x==1)//make sure to only print if actaully found
				cout << "We ran into the best case scenario!" <<endl;
				else if(x==size)
				cout << "We ran into the worst case scenario!" << endl;	
			break;
			}
		else if (i == size && v!= arr[i])
			cout << "The value " << v << " was not found in the array" << endl;
}
return 0;
}
