#include<iostream>

using namespace std;

int main (){
	cout << "Enter the size of a 2D array (Max size:10)" << endl;
	int  size;
	cin >> size;
	if(size > 10 || size < 0){
		cout<<"ERROR: you entered an incorrect value for the array size" << endl;
		return 0;}

	int arr[size][size];
	int count =0;
	for(int i=0; i <size;i++){ 
 		cout << "Enter the value in the array for row " << (i+1) <<" separated by a space, and press enter: " << endl;
		for(int j=0; j <size; j++){
			cin>> arr[i][j]; //filling double array
		if(arr[i][j] < 0)
			count ++;} //count for  negative numbers
	}
	if(count > 0)
		cout << "There are " << count << " negative values!" <<endl;
	else
		cout <<"All values are non-negative" << endl;
return 0;
}
