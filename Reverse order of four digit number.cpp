#include <iostream>
using namespace std;

int main(){
	
	int a;
	int first_number;
	int second_number;
	int third_number;
	int remainder1;
	int remainder2;
	int remainder3;
	int fourth_number;
//	int fifth_number;
	
	cout<<"Enter any four digits number: ";
	cin>>a;
	
		first_number = a/1000;
		remainder1 = a%1000;
		second_number = remainder1/100;
		remainder2 = remainder1%100;
		third_number = remainder2/10;
		fourth_number = remainder2%10;
//		fourth_number = 
		
		cout<<endl;
		cout<<"Number in Reverse Order: "<<(fourth_number*1000)+(third_number*100)+(second_number*10)+first_number;
	
	return 0;
}
