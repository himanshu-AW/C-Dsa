#include<iostream>
using namespace std;
// no of row : 5
// no of column : 4
//  * * * *
//  *     *
//  *     *
//  *     *
//  * * * *
int main()
{   int row,col;
   cout<<"no of row : ";
   cin>>row;
   cout<<"no of column : ";
   cin>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        { if(i==1||i==row||j==1||j==col){
            cout<<" *";
          }
            else{
                cout<<"  ";
            }
        }cout<<endl;
    }
    return 0;
}