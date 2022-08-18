#include <iostream>
using namespace std;

int main(){
	
	int pkr;
	float pkr_to_doll;
	cout<<"Enter Currency in PKR: ";
	cin>>pkr;
	
	pkr_to_doll =(float) pkr / 99;
	cout<<"Your Currency in dollars is: $"<<pkr_to_doll;
	
	return 0;
}
