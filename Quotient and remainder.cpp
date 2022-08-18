#include <iostream>
using namespace std;

int main(){
	
	int dividend;
	int divisor;
	int quotient;
	int remainder;
	
	cout<<"Enter Dividend: ";
	cin>>dividend;
	cout<<"Enter Divisor: ";
	cin>>divisor;
	
	quotient = dividend/divisor;
	remainder = dividend%divisor;
	
	cout<<endl;
	cout<<"After dividing "<<dividend<<" by "<<divisor<<endl;
	cout<<"Quotient: "<<quotient<<endl;
	cout<<"Remainder :"<<remainder<<endl;
	
	return 0;
}
