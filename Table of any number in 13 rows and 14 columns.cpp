#include <iostream>
using namespace std;

int main(){
	
	int number;
	int column = 1;
	int rows = 1;
	int num = 0;
	
	cout<<"Enter a number: ";
	cin>>number;
	while (rows != 15){
		while (column != 14){
			cout<<number * (column+num)<<"\t";
			column += 1;
		}
	cout<<endl;
	num += (column -1);
	rows += 1;
	column = 1;
}
	
	return 0;
}
