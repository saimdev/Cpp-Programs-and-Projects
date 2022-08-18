#include <iostream>
using namespace std;

int main(){
	
	int amount, thousands, five_hundreds, hundreds, fifties, twenties, tens, five, ones;
	
	cout<<"Enter any amount: "; cin>>amount;
	
	thousands = amount/1000;
	amount%=1000;
	five_hundreds = amount/500;
	amount%=500;
	hundreds = amount/100;
	amount%=100;
	fifties = amount/50;
	amount%=50;
	twenties = amount/20;
	amount%=20;
	tens = amount/10;
	amount%=10;
	five = amount/5;
	amount%=5;
	ones = amount/1;
	
	cout<<"\n1000: "<<thousands<<"\n500: "<<five_hundreds<<"\n100: "<<hundreds<<"\n50: "<<fifties<<"\n20: "<<twenties;
	cout<<"\n10: "<<tens<<"\n5: "<<five<<"\n1: "<<ones;
	
}
