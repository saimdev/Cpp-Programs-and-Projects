#include <iostream>
using namespace std;

int main(){
	
	int integers[10];
	int max = -32768;
	int index; 
	
	cout<<"Enter ten integers: "<<endl;
	for (int i = 0; i<10; i++){
		cin>>integers[i];
	}
	
	for (int j = 0; j<10; j++){
		if(integers[j]>max or integers[j]==max){
			max = integers[j];
			index = j;
		}
	}
	cout<<"Index of Largest number: "<<index<<endl;
	
}
