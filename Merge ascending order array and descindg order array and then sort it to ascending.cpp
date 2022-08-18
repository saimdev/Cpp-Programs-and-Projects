#include <iostream>
using namespace std;

void merge_arrays(int R, int S, int X[], int Y[], int Z[]){
	
	int x;
	for (int i=0; i<R; i++){Z[i]=X[i];}
	for (int i=S; i<(S+S); i++){Z[i]=Y[i-S];}
	for(int i=0; i<R+S; i++){		
		for(int j=i+1; j<R+S; j++){
			if(Z[i]>Z[j]){
				x = Z[i];
				Z[i] = Z[j];
				Z[j] = x;}
		}
	}
}

int main(){
	int R, S;
	int X[R], Y[S], Z[R+S];
	
	cout<<"Enter number of elements in Array1: "; cin>>R; cout<<endl;
	cout<<"Enter numbers in ascending order in Array1\n";
	for (int i=0; i<R; i++){
		cout<<"Number "<<i+1<<": "; cin>>X[i];}
	
	cout<<"\nEnter number of elements in Array2: "; cin>>S; cout<<endl;
	cout<<"Enter numbers in descending order in Array2\n";
	for (int i=0; i<S; i++){
		cout<<"Number "<<i+1<<": "; cin>>Y[i];}

	merge_arrays(R, S, X, Y, Z);
	cout<<"\nMEGRED ARRAY:\n";
	for (int i=0; i<R+S; i++){
		cout<<Z[i]<<" ";
	}
	
}
