#include <iostream>
using namespace std;

int main(){
	
	int height_inch;
	int height_cm;
	
	cout<<"Enter height in inches: ";
	cin>>height_inch;
	
	height_cm = height_inch * 2.54;
	cout<<"Height in centimeters: "<<height_cm<<endl;
	
	return 0;
}
