#include <iostream>
using namespace std;

int main(){
	
	int num1, num2, prime, half, count=0;
	
	cout<<"Input number for starting range: ";
	cin>>num1;
	cout<<"Input number for ending range: ";
	cin>>num2;
	
	cout<<"The prime numbers between "<<num1<<" and "<<num2<<" are: ";
	for (int k = num1; k <= num2; k++){
	prime = 1;
	if (k == 0 or k == 1){prime = 0;}
	else{
		half = k/2;
		if (k % 2 == 0 and k != 2){prime = 0;}
		else{
			for (int i = 2; i <= half; i++){if (k % i == 0){prime = 0;}
			}
			if(prime == 1){cout<<k<<" "; count+=1;}
			}
		}
	}
	cout<<endl;
	cout<<"The total number of prime numbers between "<<num1<<" and "<<num2<<" are: "<<count;
	return 0;
}

