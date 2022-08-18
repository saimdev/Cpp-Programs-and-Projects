#include <iostream>
using namespace std;

int main(){
	int number =12345, sum = 0;
	
	while (number > 0)
{
    int digit = number%10;
    number /= 10;
    sum+=digit;
}
cout<<sum;
}
