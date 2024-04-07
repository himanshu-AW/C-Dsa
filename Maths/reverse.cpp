#include<iostream>
using namespace std;
int main()
{
int n,m;
cout <<"Enter a number : ";
cin>>n;
m=n;
int rev=0,temp;
while (n>0)
{ 
  temp=n%10;
  rev=rev*10+temp;
  n/=10;  
}
cout<<"Reverse of the given number : "<<rev;

return 0;
}