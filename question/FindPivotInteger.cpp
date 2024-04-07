#include<iostream>
using namespace std;
 int pivotInteger(int n)
{  
   int s=1;
   int e=n;


   while (s<=e)
     {   int s1=0,s2=0;
        int mid =s+(e-s)/2;
        for(int i=1;i<=mid;i++)
            s1+=i;
        for(int j=n;j>=mid;j--)
            s2+=j;
        
         if(s1==s2)
        { 
            return mid;
        }
        else if(s1<s2)
        { 
            s=mid+1;
        }
        else 
         {
          e=mid-1;
        }
     } return -1;
}

int main()
{ 
    int n =8;
    cout << pivotInteger(n);
    return 0;
}