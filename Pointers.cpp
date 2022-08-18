#include <iostream>
using namespace std;

int main(){
	
	int a = 5;
	int b = 6;
	int *x = &a;
	int *y = &b;
	
	cout<<"The value of 'a' is: "<<a<<endl;
	cout<<"The value of 'b' is: "<<b<<endl;
	cout<<"Address of 'a' is: "<<x<<endl;
	cout<<"Address of 'b' is: "<<y<<endl;
	
	return 0;
}
