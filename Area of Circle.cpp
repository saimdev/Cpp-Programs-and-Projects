#include <iostream>
using namespace std;

int main(){
	
	float radius;
	float area;
	float pi = 3.14;
	
	cout<<"Enter Radius of Circle: ";
	cin>>radius;
	
	area = pi * (radius*radius);
	cout<<"Area of circle with radius "<<"'"<<radius<<"'"<<" is "<<area<<endl;
	
	
	return 0;
}
