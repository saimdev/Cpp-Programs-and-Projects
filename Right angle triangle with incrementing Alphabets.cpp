#include <iostream>
using namespace std;

int main(){
	int height;
	
	cout<<"Enter hieght: ";
	cin>>height;
	
	for(int i=1; i<=height; i++){
		for(int x=1; x<=i-1; x++){
			cout<<(char)('A'+x-1)<<"\t";
		}
		cout<<endl;
	}

    return 0;
}
