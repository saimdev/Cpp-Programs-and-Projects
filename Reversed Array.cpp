#include <iostream>
using namespace std;

int main(){
	int numbers[5];
	
	for (int i = 0; i<5; i++){
	cout<<"Enter number: ";
	cin>>numbers[i];
}

	cout<<"Simple Array: ";
		
	for (int x = 0; x<5; x++){
		if (x == 4){cout<<numbers[x];}
		else{cout<<numbers[x]<<", ";}
}
	cout<<endl;
	cout<<"Reversed Array: ";
	
	for (int y = 4; y>-1; y--){
		if (y == 0){cout<<numbers[y];}
		else{cout<<numbers[y]<<", ";}
}
	return 0;
}
