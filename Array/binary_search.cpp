#include<iostream>
using namespace std;
int binarysearch(int ar[],int n,int k)
{
    int s=0;
    int e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(ar[mid]==k)
        return mid;
        else if (ar[mid]>k)
        e=mid-1;
        else
        s=mid+1;
    }return -1;
}
int main()
{
int n;
cout<<"Enter the array size : ";
cin>>n;
int ar[n];
cout<<"Enter the array elements"<<endl;
for(int i=0;i<n;i++)
{
    cin>>ar[i];
}
int k;
cout<<"enter a number dou you wnat to search : ";
cin>>k;
cout<<binarysearch(ar ,n,k)<<endl;
return 0;
}