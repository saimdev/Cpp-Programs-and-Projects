#include <iostream>
using namespace std;

int Prime_Numbers(int number){
	int prime=1, half;
	half = number/2;
	if (number==0 or number==1){
		prime = 0;
	}
	else{
		for (int i=2; i<=half; i++){
			if (number%i==0){
				prime = 0;
			}
		}
	}
	if(prime==1){
		return 1;
		}
	else{
		return 2;
	}
}

int main(){
	
	int n, check;

	cout<<"Input number : ";
	cin>>n;

	Prime_Numbers(n);
	
	for(int i = 2; i <= n/2; ++i) {
        if (Prime_Numbers(i)==1) {
            if (Prime_Numbers(n - i)==1) {
                cout <<n<<" = "<< i <<" + "<<n-i<<endl;
                check = 1;
            }
        }
    }
    
    if (check==0){
    	cout <<n<<" can't be expressed as sum of two prime numbers.";
	}
	
	return 0;
}
