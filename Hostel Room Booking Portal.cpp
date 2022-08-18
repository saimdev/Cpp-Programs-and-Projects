#include <iostream>
using namespace std;

void rooms_check(int arr[3][9][2], int bed_qty){
	cout<<"Following is the Information of Room with "<<bed_qty<<" bed/s"<<endl<<endl;
	if (bed_qty==1){
		for (int i=0; i<9; i++){
			for (int j=0; j<3; j++){
				for (int x=0; x<2; x++){
					if (x==1){
						if (arr[j][i][x]==1){
							cout<<"Floor No.: "<<j+1;
							cout<<"\tRoom No.: "<<i+1<<"\tCode: ["<<j<<i<<x<<"]";
							cout<<endl;
						}
					}
				}
			}
		}
	}
	else if (bed_qty==2){
		for (int i=0; i<9; i++){
			for (int j=0; j<3; j++){
				for (int x=0; x<2; x++){
					if (x==1){
						if (arr[j][i][x]==2){
							cout<<"Floor No.: "<<j+1;
							cout<<"\tRoom No.: "<<i+1<<"\tCode: ["<<j<<i<<x<<"]";
							cout<<endl;
						}
					}
				}
			}
		}
	}
	else if (bed_qty==3){
		for (int i=0; i<9; i++){
			for (int j=0; j<3; j++){
				for (int x=0; x<2; x++){
					if (x==1){
						if (arr[j][i][x]==3){
							cout<<"Floor No.: "<<j+1;
							cout<<"\tRoom No.: "<<i+1<<"\tCode: ["<<j<<i<<x<<"]";
							cout<<endl;
						}
					}
				}
			}
		}
	}	
}
void room_book(int arr1[3][9][2], int arr2[3][9][2]){
	int code,c1,c2a,c2,c3;
	char proceed;
	cout<<"Do you want to proceed to booking? (Y/N)"; cin>>proceed;
	if (proceed=='Y' or proceed=='y'){
		cout<<"Enter code: "; cin>>code;
		c1 = (code/100);
		c2a = (code%100);
		c2 = (c2a/10);
		c3 = (c2a%10);
		arr1[c1][c2][c3]=0;
		
		cout<<endl;
		cout<<"You booked Room No. "<<c2+1<<" with "<<arr2[c1][c2][c3]<<" bed/s"<<endl;
		cout<<"Remember Your Room code that is: "<<code<<endl;
		cout<<endl;
	}
	else{
		cout<<"Okay, Thanks!"<<endl;
	}
}

void cancel_book(int arr1[3][9][2], int arr2[3][9][2]){
	int code_no,a,b,c,d;
	cout<<"\nEnter Code No.: "; cin>>code_no;
	a = (code_no/100);
	b = (code_no%100);
	c = (b/10);
	d = (b%10);
	arr1[a][c][d]=arr2[a][c][d];
	cout<<"Your Booking is Cancelled\nThank You!"<<endl<<endl;
}
int main(){
	int option, room, beds;
	int room_status[3][9][2] = { 
                     { {1,1},{2,2}, {3,3}, {4,2}, {5,3}, {6,2}, {7,3}, {8,3}, {9,1} },
                     { {1,2},{2,1}, {3,2}, {4,3}, {5,2}, {6,1}, {7,2}, {8,2}, {9,2} },
                     { {1,3},{2,3}, {3,1}, {4,1}, {5,1}, {6,3}, {7,1}, {8,1}, {9,3} }
                 };
    int copy_rstatus[3][9][2]= { 
                     { {1,1},{2,2}, {3,3}, {4,2}, {5,3}, {6,2}, {7,3}, {8,3}, {9,1} },
                     { {1,2},{2,1}, {3,2}, {4,3}, {5,2}, {6,1}, {7,2}, {8,2}, {9,2} },
                     { {1,3},{2,3}, {3,1}, {4,1}, {5,1}, {6,3}, {7,1}, {8,1}, {9,3} }
                 };
                 
    cout<<"\tWELCOME TO THE HOSTEL ROOM BOOKING PORTAL"<<endl;
	while(1){
		cout<<"1. Booking\n2. Current Status of Rooms\n3. Cancel a Booking\n4. Update the Booking\n5. Exit the Portal";
		cout<<"\n\nEnter required key to proceed: "; cin>>option;
		
		if (option==1){
			booking:
				cout<<"\n1. Book a single room"<<endl;
				cout<<"2. Book a double room"<<endl;
				cout<<"Choose any option: "; cin>>room;
				
				if (room==1){
					cout<<"\n1. Single Bed\n2. Double Bed\n3. Three Bed"<<endl;
					cout<<"Enter Number of Beds: "; cin>>beds;
					cout<<endl;
					rooms_check(room_status, beds);
					cout<<endl;
					room_book(room_status, copy_rstatus);
				}
				else if (room==2){
					cout<<"\nEnter First Room Information"<<endl;
					cout<<"\n1. Single Bed\n2. Double Bed\n3. Three Bed"<<endl;
					cout<<"Enter No. of Beds: "; cin>>beds;
					cout<<endl;
					rooms_check(room_status, beds);
					cout<<endl;
					room_book(room_status, copy_rstatus);
					cout<<"\nEnter Second Room Information"<<endl;
					cout<<"\n1. Single Bed\n2. Double Bed\n3. Three Bed"<<endl;
					cout<<"Enter No. of Beds: "; cin>>beds;
					cout<<endl;
					rooms_check(room_status, beds);
					cout<<endl;
					room_book(room_status, copy_rstatus);
				}
		}
		else if (option==2){
			cout<<"--------------------------------------------------------------------------------------------"<<endl;
			cout<<"|\tFloor No. "<<1<<"\t\t|\tFloor No. "<<2<<"\t\t|\tFloor No. "<<3<<"\t   |"<<endl;
			cout<<"|Room No.\tVacant Beds\t|Room No.\tVacant Beds\t|Room No.\tVacant Beds|"<<endl;
			cout<<"--------------------------------------------------------------------------------------------"<<endl;
			for (int i=0; i<9; i++){
				for (int j=0; j<3; j++){
					for (int x=0; x<2; x++){
						cout<<"    "<<room_status[j][i][x]<<"\t\t";
						if(j==2 && x==1){
							cout<<endl;
						}
					}
				}
			}
			cout<<endl<<endl;
		}
		else if (option==3){
			cancelling_booking:
				cancel_book(room_status, copy_rstatus);
		}
		else if (option==4){
			int update;
			cout<<"\n1. Book a new Room\n2. Cancel Booking\nChoose any option: "; cin>>update;
			if (update==1){goto booking;}
			else if (update==2){goto cancelling_booking;}
		}
		else if (option==5){
			exit(0);
		}
		else{
			cout<<"Choose the correct option"<<endl<<endl;
		}
	}	
}
