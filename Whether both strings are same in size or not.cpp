#include <iostream>
using namespace std;

int main()
{
	string str1;
	string str2;
	
	cout<<"Enter first string: ";
	cin>>str1;
	cout<<"Enter second string: ";
	cin>>str2;
	
	if (str1.size()==str2.size()){
		cout<<"Both strings are same";
	}
	else{
		cout<<"Strings are not same";
	}
}

