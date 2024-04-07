#include<iostream>
using namespace std;
long long int sqrt_integer(int n)
{  
   int s=0;
   int e=n;
   int ans;
   while (s<=e)
     {
       long long int mid =s+(e-s)/2;
        long long int square=mid*mid;
        
        if(square==n)
        { 
           return mid;
        }
        else if(square<n)
        { 
            ans=mid;
           s=mid+1;
        }
        else 
        { 
            e=mid-1;
        }
     } return ans;
}

double float_part(int tempsol,int float_point,int n)
{ 
  double ans=tempsol,fract=1;
  for ( int i=0;i<float_point;i++)
     {   fract=fract/10;
       for (double j=ans;j*j<n;j=j+fract)
         { 
          ans=  j;
        }
     } return ans;
}

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int tempsol=sqrt_integer(n);
    cout << "Answe is "<<float_part(tempsol,3,n)<<endl;
    return 0;
}