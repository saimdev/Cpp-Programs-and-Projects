#include <iostream>
using namespace std;

int middle_row_column(int arr[3][3]){
	cout<<"MIDDLE ROW:\n";
	for (int i=0; i<3; i++){cout<<arr[3/2][i]<<" ";}
	cout<<"\nMIDDLE COLUMN:\n";
	for (int i=0; i<3; i++){cout<<arr[i][3/2]<<" ";}
}

int main(){
	
	int arr[3][3];

	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout<<"Enter Element ["<<i<<"]["<<j<<"]: "; cin>>arr[i][j];}
	}
	
	middle_row_column(arr);
}
