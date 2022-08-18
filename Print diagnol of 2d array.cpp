#include <iostream>
using namespace std;

int main(){
	
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	
	cout<<"Complete array: "<<endl;
	for(int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"Just Diagnol of array: "<<endl;
	for(int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			if ((i==0 and j==0) or (i==1 and j==1) or (i==2 and j==2)){
			cout<<arr[i][j]<<" ";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	return 0;
}
