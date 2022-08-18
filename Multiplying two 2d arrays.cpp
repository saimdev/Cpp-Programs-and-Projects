#include<iostream>
using namespace std;

int main()
{

int matrix1[2][2],matrix2[2][2];
int matrix3[2][2]={0,0,0,0};

cout<<"Enter elements of matrix1:"<<endl;
for (int i=0;i<2;i++)
  {
   for (int j=0;j<2;j++)
    cin>>matrix1[i][j];
   }

cout<<"Enter elements of matrix2:"<<endl;
for (int i=0;i<2;i++)
  {
   for (int j=0;j<2;j++)
   cin>>matrix2[i][j];
  }
cout<<endl;
 for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++)
            {
                matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
}

 for(int i = 0; i < 2; i++){
    for(int j = 0; j < 2; j++)
    {
        cout <<matrix3[i][j]<<" ";
    }
    cout<<endl;
}

}
