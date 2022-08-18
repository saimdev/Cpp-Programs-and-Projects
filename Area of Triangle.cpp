#include <iostream>
using namespace std;

int main(){
	
	float base;
	float height;
	float area;
	
	cout<<"Enter Base: ";
	cin>>base;
	cout<<"Enter Height: ";
	cin>>height;
	
	area = (0.5*base*height);
	
	cout<<endl;
	cout<<"Area of triangle = "<<area;
	
	return 0;
}
