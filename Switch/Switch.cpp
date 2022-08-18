#include <iostream>
using namespace std;

int main(){
	
	int number;
	while (1){
	
	cout<<"Enter any number: ";
	cin>>number;
	
	switch (number){
		case (0): cout<<"You enter 0"; break;
		case (1): cout<<"You enter 1"; break;
		case (2): cout<<"You enter 2"; break;
		case (3): cout<<"You enter 3"; break;
		case (4): cout<<"You enter 4"; break;
		case (5): cout<<"You enter 5"; break;
		case (6): cout<<"You enter 6"; break;
		case (7): cout<<"You enter 7"; break;
		case (8): cout<<"You enter 8"; break;
		case (9): cout<<"You enter 9"; break;
		case (10): cout<<"You enter 10"; break;
		
		default: cout<<"You entered number out of range"; break;
		
	}
	cout<<endl;
}
	return 0;
}
