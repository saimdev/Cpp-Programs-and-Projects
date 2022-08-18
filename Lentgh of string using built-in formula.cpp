#include <iostream>
using namespace std;

int main(){
	
	string word;
	int count;
	
	cout<<"Enter any word: ";

	getline(cin, word);
	count = word.size();
	
	cout<<"Length of word is: "<<count;
	
	return 0;
}
