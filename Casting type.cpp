#include <iostream>
using namespace std;

int main(){
	
	float a;
	float b;
	int remainder;
	
	cout<<"Enter first float number: ";
	cin>>a;
	cout<<"Enter second float number: ";
	cin>>b;
	
	remainder = int(a)%int(b);
	
	cout<<"Remainder (integer type): "<<remainder<<endl;
	
	return 0;
}
