#include <iostream>
using namespace std;

double power_func(double n, int p=2){
	double result=1;
	
	for (int i=0; i<p;i++){
		result*=n;
	}
	
	return result;
}

int main(){
	
	int number, power;
	
	cout<<"Enter Base number: "; cin>>number;
	cout<<"Enter Power: "; cin>>power;
	
	cout<<"Result with Power: "<<power_func(number, power)<<endl;
	cout<<"Result witout Power: "<<power_func(number);
}
