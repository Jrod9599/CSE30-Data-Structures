# include <iostream>
using  namespace std;

int main () {

cout << "Enter the size of the array"<<endl;
int size;
cin >> size;

if(size < 1){
        cout << "ERROR: you entered an incorrect value for the array size! " << endl;
        return 0;
        }
int arr[size];
cout << "Enter the numbers in the array, seperated by a space, and press enter: ";
for(int i =0; i < size; i++){
        cin >> arr[i];
        }
//count swaps
int count=0;

//organize array here
for(int i = 0; i <size; i ++){
        for(int j = i+1; j<size; j++){
                if(arr[i] < arr[j]){
                        int t=arr[i];
                        arr[i]=arr[j];
                        arr[j]=t;
			count ++;       
                }
        }
}

cout << "This is the sorted array in descending order: ";
//print out new organized array
for(int i=0; i<size; i++){
        cout <<  arr[i] << " ";
        if(i==size-1)
                cout << endl;
}
cout << "The algorithm selected the maximum  for the tranverse of the array." << endl;
cout << "It took " << count << " swaps to sort the array..." << endl;
return 0; 
}


