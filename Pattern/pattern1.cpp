#include<iostream>
using namespace std;
// no of rows :5
//no of column :4
// ****
// ****
// ****
// ****
// ****
int main()
 {
   int row,col;
   cout<<"no of row : ";
   cin>>row;
   cout<<"no of column : ";
   cin>>col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        cout<<" *";
        cout<<endl;
    }


    return 0;
}