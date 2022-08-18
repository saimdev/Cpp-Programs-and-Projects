#include <iostream>
using namespace std;

int main(){
	
	int tempC;
	int tempF;
	
	cout<<"Enter Temperature in Celcius: ";
	cin>>tempC;
	
	tempF = (1.8*tempC)+32;
	
	cout<<"Temperature in Fahrenheit = "<<tempF;
	
	return 0;
}
