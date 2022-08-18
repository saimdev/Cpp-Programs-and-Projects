#include <iostream>
using namespace std;

int main(){
	
	float first_number;
	float second_number;
	char operator1;
	char another = 'y';
	while (another == 'y'){

	cout<<"Enter First number, Operator, Second number: ";
	cin>> first_number >> operator1 >> second_number;
	
	switch(operator1){
		case('*'): cout<<"Answer: "<<first_number * second_number; break;
		case('/'): cout<<"Answer: "<<first_number / second_number; break;
		case('+'): cout<<"Answer: "<<first_number + second_number; break;
		case('-'): cout<<"Answer: "<<first_number - second_number; break;
		
		default: cout<<"Invalid Operator"<<endl; break;
	}
	cout<<endl;
	cout<<"Do another (y/n)? ";
	cin>>another;
}
	
	return 0;
}
