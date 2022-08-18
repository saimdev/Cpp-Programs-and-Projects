#include <iostream>
using namespace std;

int main(){
	
	int digits, cubes, sum, number;
	
	cout<<"Armstrong numbers between 1-700 are:\n";
	
	for (int i=1; i<=700; i++){
		sum=0;
		number=i;
		while(number>0){
			digits=number%10;
			number/=10;
			cubes=digits*digits*digits;
			sum+=cubes;
		}
		if (sum==i){cout<<i<<endl;}
	}
	
}
