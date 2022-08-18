#include <iostream>
using namespace std;

void Reverse_Num(int number){
	
	int first_digit;
	int second_digit;
	int third_digit;
	int fourth_digit;
	int fifth_digit;
	int remainder1;
	int remainder2;
	int remainder3;
	
	first_digit = number/10000;
	remainder1 = number%10000;
	second_digit = remainder1/1000;
	remainder2 = remainder1%1000;
	third_digit = remainder2/100;
	remainder3 = remainder2%100;
	fourth_digit = remainder3/10;
	fifth_digit = remainder3%10;
	
	cout<<endl;
	cout<<fifth_digit*10000+fourth_digit*1000+third_digit*100+second_digit*10+first_digit*1<<endl;
}

int main(){
	
	int n;
	
	cout<<"Enter any 5-digit number: ";
	cin>>n;
	
	Reverse_Num(n);
	
	return 0;
}
