#include <iostream>
using namespace std;

int main(){
	int years;
	int months;
	int days;
	int hours;
	int minutes;
	int seconds;
	
	cout<<"Enter your age in years: ";
	cin>>years;

	months = years * 12;
	days = years * 365;
	hours = days * 24;
	minutes  = hours * 60;
	seconds = minutes * 60;
	
	cout<<endl;
	cout<<"Age in Years: "<<years<<endl;
	cout<<"Age in Months: "<<months<<endl;
	cout<<"Age in Days: "<<days<<endl;
	cout<<"Age in Hours: "<<hours<<endl;
	cout<<"Age in Minutes: "<<minutes<<endl;
	cout<<"Age in Seconds: "<<seconds<<endl;
	
	return 0;
}
