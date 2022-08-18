#include <iostream>
using namespace std;

int main(){
	
	string word;
	int length1 = 0;

	cout<<"Enter any word: ";
	getline(cin, word);
	
	while(word[length1]){length1++;}
	 
	
	cout<<"Word: "<<length1;
	
	return 0;
}
