#include <iostream>
using namespace std;

int main(){
	
	int n;
	float sum=0;
	
	cout<<"1+1/2+1/3+1/4+1/5+........+1/n"<<endl;
	cout<<endl;
	cout<<"Enter any number 'n': ";
	cin>>n;
	
	for (float i = 1; i<=n;i++){
		sum+=(1/i);
	}
	cout<<"Sum of this series: "<<sum;
	return 0;
}
