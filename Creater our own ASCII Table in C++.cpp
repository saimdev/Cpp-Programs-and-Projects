#include <iostream>
using namespace std;

int main(){
	int x=0;
	cout<<"\t\t\t\t\t\"ASCII Table\""<<endl;
	cout<<endl;
	cout<<"Num\tChar\tNum\tChar\tNum\tChar\tNum\tChar\tNum\tChar\tNum\tChar"<<endl;
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<endl;
	cout<<x<<"\t"<<"Null"<<"\t"<<x+1<<"\t"<<"SoH"<<"\t"<<x+2<<"\t"<<"SoTxt"<<"\t"<<x+3<<"\t"<<"EoTxt"<<"\t";
	cout<<x+4<<"\t"<<"EoT"<<"\t"<<x+5<<"\t"<<"Enq"<<"\t"<<endl<<x+6<<"\t"<<"Ack"<<"\t"<<x+7<<"\t"<<"Bell"<<"\t";
	cout<<x+8<<"\t"<<"Bsp"<<"\t"<<x+9<<"\t"<<"HTab"<<"\t"<<x+10<<"\t"<<"LFeed"<<"\t"<<x+11<<"\t"<<"VTab"<<"\t"<<endl;
	cout<<x+12<<"\t"<<"FFeed"<<"\t"<<x+13<<"\t"<<"CR"<<"\t"<<x+14<<"\t"<<"SOut"<<"\t"<<x+15<<"\t"<<"SIn"<<"\t";
	cout<<x+16<<"\t"<<"DLE"<<"\t"<<x+17<<"\t"<<"DC1"<<"\t"<<endl;
	for (int num = 18; num<255;num+=6){
		for (int i = 0; i<6;i++){
			cout<<i+num<<"\t"<<char(i+num)<<"\t";
			if ((i+num)==255){break;}
		}
		cout<<endl;
	}
	return 0;
}
