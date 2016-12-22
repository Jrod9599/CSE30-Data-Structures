#include <iostream>
using namespace std;
int *sortArr(int array[], int direction, int arrayLength)
{
int i;
int j;
int l;
int *newArray = new int [arrayLength];
int first;
int temp;
	if (direction ==1) //under the situation where they decide to make the data descend
	{
	for(i=arrayLength-1; i>0; i--) //starts from the end of the array
	{
			first = 0;
		for(j=1; j<=i; j++)
		{
			if(array[j]<array[first])//compares beginning last to first and changes if need be
			first = j;
		}
		temp = array[first];
		array[first] = array[i];
		array[i] = temp;
	}
		for (l = 0; l<arrayLength; l++)
		{
		newArray[l] = array[l];
		}
	}
	if(direction == 0) // under the situation where they decide to make the data ascend
	{
	for (i=arrayLength-1; i>0; i--)
	{
		first = 0;
		for (j=1; j<=i; j++)
		{
			if(array[j]>array[first])
			first =j;
		}
		temp = array[first];
		array[first] = array[i];
		array[i] =temp;
	}
		for (l=0; l<arrayLength; l++)
		{
		newArray[l]=array[l];
		}
	}
	return newArray;
}
int main()
{
	int tempIndex;
	int arrayLength;
	int swap;
	int direction;
	cout << "Enter the size of the array: ";
	cin >> arrayLength;
		if (arrayLength < 0)//in the event where they enter a negative or letters
			{
				cout << "Error: You have entered an incorrect size for the array!";
			}
		else //every other situation continues the program
		{
			int array[arrayLength];
		cout << "Enter the number in the array, seperated by a space: ";
			for(int i = 0; i < arrayLength; i++)
				{
					cin >> array[i];
				}
		cout << "Sort in ascending (0) or descending (1) order? "; //decides the program path
		cin >> direction;
		int * newArray = sortArr (array, direction, arrayLength);
	if(direction == 1)
		cout << "This is the assorted array in descending order ";
	if(direction == 0)
		cout << "this is the assorted array in ascending order ";
	for (int j=0; j < arrayLength; j++) //runs the array length program
			cout << newArray[j] << " ";
			cout << endl;
		}
return 0;
}
