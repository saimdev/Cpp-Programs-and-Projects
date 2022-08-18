#include <iostream>
#include <math.h>
using namespace std;

float mySum(float, float);
float mySubt(float, float);
float myMultply(float, float);
float myDiv(float, float);
int myFact(int);
float mysqr(int);
void myTable(int);
void exitmsg();

int main(){
	
	float x, y;
	int option, z, t;
	
	cout<<"\t\tSAIM's CALCULATOR"<<endl;
	
	cout<<"0. To exit"<<endl;	
	cout<<"1. Addition"<<endl;
	cout<<"2. Multiplication"<<endl;
	cout<<"3. Subtraction"<<endl;
	cout<<"4. Division"<<endl;
	cout<<"5. Factorial"<<endl;
	cout<<"6. Sqaure Root"<<endl;
	cout<<"7. Table"<<endl<<endl;
	
	cout<<"Which function you want to choose: "; cin>>option;
	
	if (option == 1){
		cout<<"Enter First number: "; cin>>x;
		cout<<"Enter Second number: "; cin>>y;
		cout<<"Sum: "<<mySum(x, y)<<endl;
	}
	else if (option == 2){
		cout<<"Enter First number: "; cin>>x;
		cout<<"Enter Second number: "; cin>>y;
		cout<<"Multiplication: "<<myMultply(x, y)<<endl;
	}
	else if (option == 3){
		cout<<"Enter First number: "; cin>>x;
		cout<<"Enter Second number: "; cin>>y;
		cout<<"Subtraction: "<<mySubt(x, y)<<endl;
	}
	else if (option == 4){
		cout<<"Enter dividend: "; cin>>x;
		cout<<"Enter divisor: "; cin>>y;
		cout<<"Division: "<<myDiv(x, y)<<endl;
	}
	else if (option == 5){
		cout<<"Enter number: "; cin>>z;
		cout<<"Factorial: "<<myFact(z)<<endl;
	}
	else if (option == 6){
		cout<<"Enter number: "; cin>>x;
		cout<<"Square Root: "<<mysqr(x)<<endl;
	}
	else if (option == 7){
		cout<<"Enter number: "; cin>>t;
		cout<<"Table: "<<endl;
		myTable(t);
	}
	else{
		exitmsg();
	}

}

float mySum(float a, float b){
	float sum;
	sum = a+b;
	return sum;
}

float mySubt(float a, float b){
	float sub;
	sub = a-b;
	return sub;
}

float myMultply(float a, float b){
	float mult;
	mult = a*b;
	return mult;
}

float myDiv(float a, float b){
	float division;
	division = a/b;
	return division;
}

int myFact(int a){
	int f= 1;
	for(int i = 1; i<=a; i++){
		f = f*i;
	}
	return f;
}
float mysqr(int a){
	float sqroot;
	sqroot = pow(a, (0.5));
	return sqroot;
}

void myTable(int a){
	for(int i=1; i<=10; i++){
		cout<<a<<" x "<<i<<" = "<<a*i<<endl;
	}
}

void exitmsg(){
	cout<<endl;
	cout<<"Okay, Thanks for coming"<<endl;
}
