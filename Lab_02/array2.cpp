#include <iostream>
using namespace std;

int main(){
        cout << "Enter a string to reverse" <<endl;
        string word;
        cin >>word;

        cout << "The reverse of the string is: " << endl;
        string sub = word;//substring to switch lettering with

        int j=(word.size()-1); //for counting
        for(int i =0; i < word.size(); i++){
                word[i] = sub[j-i];//replace letter with the letter on the oppisite end
        }
        cout << word<< endl;
return 0;
}
