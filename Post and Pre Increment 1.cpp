#include <iostream>
using namespace std;

int main(){
	
	int x = 10, y =15;
	x = x++ + ++x;
	y = ++x + y++;
	cout<<x<<"\t"<<y;
	
	return 0;
}
