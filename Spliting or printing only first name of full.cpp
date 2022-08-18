#include<iostream>
#include<cstring>
using namespace std;

int main()
{
string name;
int size_of_string;
int null_index;
cout<<"Enter full name:";
getline(cin, name);

size_of_string = name.size();

for (int i = 0; i<size_of_string; i++){

	if (name[i]==' '){
		null_index = i;
		break;
	}
}
cout<<"First Name: ";
for (int x = 0; x<null_index; x++){
	cout<<name[x];
}

}
