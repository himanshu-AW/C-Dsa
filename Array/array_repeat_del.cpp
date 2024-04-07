#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the  size :";
cin>>n;
int ar[n];
cout<<"enter shorted the array elements\n";
for (int i=0;i<n;i++)
{
    cin>>ar[i];
}int r=n;
for (int i=0;i<n;i++)
{
    if(ar[i]==ar[i+1])
    {
        for(int j=i;j<n;j++)
        {
            ar[i+1]=ar[i+2];
            
        }n--;
    }
}
for (int i=0;i<=n;i++)
{
    cout<<ar[i]<<" ";
}
return 0;
}