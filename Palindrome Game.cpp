#include <iostream>
using namespace std;

int main(){
	
	int num1,num2;
	int digits, turn = 1;
	string guess, quit;
	int score1 = 0, score2 = 0, palindrome = 0;
	int first_digit, second_digit, third_digit, fourth_digit, fifth_digit, remainder1, remainder2, remainder3;
	int reverse;
	cout<<"\t\tGUESS GAME"<<endl;
	cout<<endl;
	cout<<"\t----------------------------"<<endl;
	cout<<"\t| Player 1"<<"   |   Player 2  |"<<endl;
	cout<<"\t----------------------------"<<endl;
	cout<<"\t| Score: "<<score1<<"   |   Score: "<<score2<<"  |"<<endl;
	cout<<"\t----------------------------"<<endl;	
	
	while (1){
	digits= 0;
	cout<<endl;
	if (turn==1){cout<<"\tPlayer 1 Turn"<<endl;} else{cout<<"\tPlayer 2 Turn"<<endl;}
	cout<<"Enter five digit number: ";
//	getline(cin,num1);

	cin>>num1;
	num2=num1;
//	cout<<num1<<endl;
//	cout<<num2<<endl;
	while(num1!=0){
		num1/=10;
		digits+=1;
	}
//	cout<<"Digits: "<<digits<<endl;
	if (digits==5){
		first_digit = num2/10000;
		remainder1 = num2%10000;
		second_digit = remainder1/1000;
		remainder2 = remainder1%1000;
		third_digit = remainder2/100;
		remainder3 = remainder2%100;
		fourth_digit = remainder3/10;
		fifth_digit = remainder3%10;
//		cout<<first_digit;
		reverse = (fifth_digit*10000)+(fourth_digit*1000)+(third_digit*100)+(second_digit*10)+first_digit;
//		cout<<"Reverse: "<<reverse<<endl;
		if(turn==1){cout<<"Now, Player 2 Guess whether the number is Palindome or not (Y/N)?: ";}
		else{cout<<"Now, Player 1 Guess whether the number is Palindome or not (Y/N)?: ";}
		cin>>guess;
		if (num2==reverse){
//			cout<<"It is Palindromic Number"<<endl;
			palindrome = 1;
		}
		if (guess == "Y" or guess == "y"){
			if (palindrome == 1){
				if(turn==1){cout<<"Player 2 won, number is palindrome"<<endl;score2+=5;}
				else{cout<<"Player 1 won, number is palindrome"<<endl;score1+=5;}
			}
			else{
				if(turn==1){cout<<"Player 2 lost, number is not palindrome"<<endl;}
				else{cout<<"Player 1 lost, number is not palindrome"<<endl;}
			}
		}
		else if (guess == "N" or guess == "n"){
			if (palindrome == 1){
				if(turn==1){cout<<"Player 2 lost, number is palindrome"<<endl;}
				else{cout<<"Player 1 lost, number is palindrome"<<endl;}
			}
			else{
				if(turn==1){cout<<"Player 2 won, number is not palindrome"<<endl;score2+=5;}
				else{cout<<"Player 1 won, number is not palindrome"<<endl;score1+=5;}
			}
		}
	cout<<endl;
	cout<<"\t----------------------------"<<endl;
	cout<<"\t| Player 1"<<"   |   Player 2  |"<<endl;
	cout<<"\t----------------------------"<<endl;
	cout<<"\t| Score: "<<score1<<"   |   Score: "<<score2<<"  |"<<endl;
	cout<<"\t----------------------------"<<endl;
//		else{
//			cout<<"It is not Palindromic Number"<<endl;
//			palindrome
//		}
	}
	else{
		cout<<"You must enter five digit number"<<endl;
	}
	if(turn==1){turn = 2;} else{turn =1;}
	cout<<endl;
	cout<<"Do you want to continue (Y/N) ";
	cin>>quit;
	if (quit == "N" or quit == "n"){
		break;
	}
	}
//	cout<<"Digits: "<<digits;
	return 0;
}
