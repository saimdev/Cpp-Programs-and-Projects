#include <iostream>
using namespace std;

void Factors(int a, int b){
	cout<<"Factors of "<<a<<" : "<<endl;
	for (int i=1; i<a; i++){
		if (a%i==0){
			cout<<i<<" ";
		}
	}
	cout<<endl;
	cout<<"Factors of "<<b<<" : "<<endl;
	for (int i=1; i<b; i++){
		if (b%i==0){
			cout<<i<<" ";
		}
	}
}

int main()
{
	int n1, n2;
	
	cout<<"Enter first number: ";
	cin>>n1;
	cout<<"Enter Second number: ";
	cin>>n2;
	
	Factors(n1, n2);
	return 0;
}
