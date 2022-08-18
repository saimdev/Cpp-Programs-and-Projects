#include <iostream>
using namespace std;

int main(){
	
	int number;
	int max = -32767;
	int min = 32768;
	char option;

	do{
		cout<<"Enter any number (-32767 to +32768): ";
		cin>>number;
		if (number<-32767 or number>32768){
			cout<<"Number is out of range"<<endl;
		}
		else{
		if(number<min){
			min = number;
		}
		else if (number>max){
			max = number;
		}
		else{
			continue;
		}
	}
	cout<<"Do you want to continue? (y/n)";
	cin>>option;
	
	}while(option=='y');
	
	cout<<"Maximum number: "<<max<<endl;
	cout<<"Minimum number: "<<min<<endl;
	
	return 0;
}
