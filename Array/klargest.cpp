#include<iostream>
using namespace std;
int klargest(int a,int k,int n)
{
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {  if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";    
    for(int i=n;i<k;i--)
    {  
        return (a[i]);
    }
}
int main()
{
int a[6]={7,36,97,-9,8,35};
int k=2;
int rs=klargest(a,k,6);
for(int i=0;i<k;i++)
cout<<rs<<endl;
return 0;
}