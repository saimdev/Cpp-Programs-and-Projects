#include <iostream>
using namespace std;

int main(){
	
	int num;
	int prime=0;
	int half;
	int i=2;
	while(1){
	cout<<"Enter any number: ";
	cin>>num;
	half = num/2;
	if (num==0 or num==1){
		cout<<num<<" is not a Prime number"<<endl; 
	}
	else{
		if (num%2==0 and num!=2){
			cout<<num<<" is not a prime number"<<endl;
		}
		else{
		while (i<=half){
			if (num%i==0){
				prime = 1;
				cout<<num<<" is not a prime number"<<endl;
				break;
			}
			i++;
		}
		if(prime==0){
					cout<<num<<" is a Prime number"<<endl;
		}
		}
	}
}
	return 0;
}
