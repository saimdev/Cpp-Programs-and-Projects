#include <iostream>
using namespace std;

int main(){
	int a =1;
		for(int x = 1; x <8; x++){
			for (int s= 9 ; s>x; s--){
			cout<<"  ";
			}
			if (x%2!=0){
				for (int y= 1 ; y<x+1; y++){
					cout<<" "<<a<<" ";
					a+=2;
				}	
			}	
			cout<<"\n";
		}
		
//		------------------------------
		cout<<endl;
		for(int x = 1; x <6; x++){
			for (int s= 5 ; s<x+8; s++){
			cout<<"  ";
			}
			if (x%2!=0){
				for (int y= 6 ; y>x; y--){
					cout<<" "<<a<<" ";
					a+=2;
				}	
			}	
			cout<<"\n";
		}

    return 0;
}
