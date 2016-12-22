#include <iostream>
#include<fstream>
using namespace std;

int checkArraySort(int a[],int  array_max, int first, int last){
		
		if(last > array_max)
			return -20;
		else if(last < first)
			return -10;
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

int main(){
	//initializing array
        const int array_max=20;
        int arr[array_max];

	//user input
        cout << "Enter beggining position to output: " << endl;
        int start, finish;
        cin >> start;
        cout << "Enter ending postition to output: " << endl;
        cin >> finish;
	
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
	int returnValue = checkArraySort(arr, array_max, start, finish);
      
	//type of array,error?descending?ascending?a big mess?
	if(returnValue == -20 || returnValue == -10)
		cout<< "You are trying to check an invalid range of array elements!" <<endl;
	else if(returnValue == -1)
		cout << "The portion of the array is sorted in descending order!" <<endl;
	else if(returnValue ==  0)
		cout << "The portion of the array is not sorted!" << endl;
	else if(returnValue == 1)
		cout << "The portion of array is sorted in ascending order!" << endl;

return 0;
}

