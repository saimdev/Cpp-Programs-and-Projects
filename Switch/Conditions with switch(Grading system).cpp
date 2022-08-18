#include <iostream>
using namespace std;


int main(){
	
	int percentage;
	while (1){

	cout<<"Enter your Percentage: ";
	cin>>percentage;
	if (percentage > 100){
		cout<<"Percentage msut be equal or lower than 100"<<endl;
	}
	else{
		switch (percentage/10){
		
		case (10):
		case (9): 
		case (8): cout<<"You scored "<<percentage<<"%"<<endl<<"You have passed with Distinction"<<endl; break;
		case (7):
		case (6): cout<<"You scored "<<percentage<<"%"<<endl<<"You have passed with First Division"<<endl; break;
		case (5): cout<<"You scored "<<percentage<<"%"<<endl<<"You have passed with Second Division"<<endl; break;
		case (4): cout<<"You scored "<<percentage<<"%"<<endl<<"You have passed with Third Division"<<endl; break;
		
		default:cout<<"You are Fail"<<endl; break;
	}
}

	cout<<endl;
}
	return 0;
}
