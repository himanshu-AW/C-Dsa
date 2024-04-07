#include"iostream"
#include"cmath"
using namespace std;
int main()
{
// int n,i;
// cout<<"Enter a number : ";
// cin>>n;
// for( i=2;i<=n/2;i++)
// {
//     if(n%i==0)
//        break;
// }
// if(i>n/2)
// cout<<"prime number";
// else 
// cout <<"not prime";
int m,n,i,j;
cout<<"Enter range of prime no : ";
cin>>m>>n;
for(i=m;i<=n;i++)
{
    for(j=2;j<=i/2;j++)
    { 
        if(i%j==0)
        break;
    }if(j>i/2)
    cout<<"this is prime no : "<<i<<endl;
}
return 0; 
}