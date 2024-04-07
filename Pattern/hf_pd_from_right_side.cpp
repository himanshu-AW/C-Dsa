#include<iostream>
using namespace std;
// Enter a number :4
//        *
//      * *
//    * * *
//  * * * *
int main()
{int n,temp;
cout<<"Enter a number :";
cin>>n;
temp=n;
  for(int i=1;i<=n;i++)
  {  temp--;
   for(int j=temp;j>=1;j--)
   cout<<"  ";
    for(int j=1;j<=i;j++)
      cout<<" *";
    cout<<endl;
  }
    return 0;
}