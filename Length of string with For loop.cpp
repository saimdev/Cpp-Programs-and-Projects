#include <iostream>
using namespace std;

int main(){
	string word;
	int length1;
	
	cout<<"Enter any word: ";
	getline(cin, word);
	
	for (int i = 0; word[i] != '\0'; i++){
		
		length1++;
	}
	
	cout<<"Length of word is: "<<length1;
	
	return 0;
}
