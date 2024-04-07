#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;

for(int i=1;i<=(2*n-1);i++)
{
    for(int j=1;j<=n*2-1;j++)
    {
        if(i==j||j==2*n-1||i==2*n-1)
        cout<<n+1-i;
    }cout<<endl;
}
return 0;
}