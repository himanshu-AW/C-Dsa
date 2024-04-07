#include<iostream>
using namespace std;
int main()
{ 
    int n;
cout<<"Enter a number :";
cin>>n;
// Enter a number :5
//  1        
//  0 1      
//  1 0 1    
//  0 1 0 1  
//  1 0 1 0 1
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
        if((i+j)%2==0)
        cout<<" 1";
        else
        cout<<" 0";
    } cout<<endl;
}


// Enter a number :5
//  1
//  0 0
//  1 1 1
//  0 0 0 0
//  1 1 1 1 1
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
        if(i%2!=0)
        cout<<" 1";
        else
        cout<<" 0";
    } cout<<endl;
}


// Enter a number :5
//          * * * * *
//        * * * * *  
//      * * * * *    
//    * * * * *
//  * * * * *  
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        cout<<"  "; 
        for(int j=0;j<n;j++)
        cout<<" *";
        cout<<endl;
    }
// Enter a number :5
//      * * * * *
//        * * * * *
//          * * * * *
//            * * * * *
//              * * * * *
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=n-i;j--)
        cout<<"  "; 
        for(int j=0;j<n;j++)
        cout<<" *";
        cout<<endl;
    }
    return 0;
}