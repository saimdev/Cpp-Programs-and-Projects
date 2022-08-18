#include <iostream>
using namespace std;

int main(){
	
	int number;
	
	cout<<"Enter any number: ";
	cin>>number;
	
	if ((number >=33 and number <=47) or (number >=58 and number <=64) or (number >=91 and number <=96) or (number >=123 and number <=126 )){
		
		cout<<"It is Special Character which is "<< char(number);
		
	}
	else if (number >=48 and number <=57){
		
		cout<<"It is a digit which is "<<char(number);
	}
	else if (number >=97 and number <=122){
		
		cout<<"It is a small letter which is "<<char(number);
	}
	else if (number >=65 and number<=90){
		
		cout<<"It is a capital letter which is "<<char(number);
	}
	return 0;
}
