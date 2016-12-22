#include <iostream> 
#include <fstream> 
#include <string>
using namespace std; 

int main() {
	int counter = 0;
	bool check = true;
	//opeing files
	ifstream myfile_in;
	myfile_in.open ("words_in.txt");
	ofstream myfile_out;
	myfile_out.open ("words_out.txt");

	string line;
	//check if open
	while (check)
	{
		getline(myfile_in, line);
		if (myfile_in.eof() == true)
			check = false;
		else
		{
			counter++;
			cout << counter << line << endl;
		}
	}

	myfile_in.close();

	string* arr = new string [counter];

	cout << counter << endl;

	myfile_in.open ("words_in.txt");
	//read file
	for (int i = 0; i < counter; i++)
	{
		getline(myfile_in, arr[i]);
	}
	//print file
	for (int i = 0; i < counter; i++)
	{
		myfile_out << arr[i] << endl;
	}

	delete [] arr;
	myfile_in.close();
	myfile_out.close();
	return 0;
}
