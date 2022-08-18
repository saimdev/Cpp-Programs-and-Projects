#include <iostream>
using namespace std;

int main(){
	
	string a = "Hello";
	string b = "Hey";
	string c = "Where";
	string d = "Were";
	string e = "Catch";
	string f = "By";
	int length_a;
	int length_b;
	int length_c;
	int length_d;
	int length_e;
	int length_f;
	
	length_a = a.length();
	length_b = b.length();
	length_c = c.length();
	length_d = d.length();
	length_e = e.length();
	length_f = f.length();
	
	if (length_a < length_b and length_a < length_c and length_a < length_d and length_a < length_e and length_a < length_f){
		cout<<"\""<<a<<"\""<<" is smaller";
	}
	else if (length_b < length_a and length_b < length_c and length_b < length_d and length_b < length_e and length_b < length_f){
		cout<<"\""<<b<<"\""<<" is smaller";
	}
	else if (length_c < length_a and length_c < length_b and length_c < length_d and length_c < length_e and length_c < length_f){
		cout<<"\""<<c<<"\""<<" is smaller";
	}
	else if (length_d < length_a and length_d < length_b and length_d < length_c and length_d < length_e and length_d < length_f){
		cout<<"\""<<d<<"\""<<" is smaller";
	}
	else if (length_e < length_a and length_e < length_b and length_e < length_c and length_e < length_d and length_e < length_f){
		cout<<"\""<<e<<"\""<<" is smaller";
	}
	if (length_f < length_a && length_f < length_b && length_f < length_c && length_f < length_d && length_f < length_e){
		cout<<"\""<<f<<"\""<<" is smaller";
	}
	return 0;
}
