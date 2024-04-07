#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int c=0,n,r;
int temp,sum=0;
cout<<"Enter a number : ";
cin>>n;
temp=n;
while(n>0){
    n/=10;
    c++;
}
n=temp;
while (n>0)
{
    r=n%10;
    sum+=pow(r,c);
    n/=10;
}
    if(sum==temp)
{
    cout<<"This is Armstrong number : "<<temp;
}
    else
{ 
    cout<<"This is not Armstrong number : "<<temp;
}
return 0;
}