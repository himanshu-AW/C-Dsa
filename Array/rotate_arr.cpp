#include<iostream>
#include<vector>
using namespace std;
int main()
{
 vector <int> nums={6,7,1,2,3,4,5};
 int n=nums.size();
 int c=0;
 for(int i=1;i!=n;i=(1+i)%n)
    {
        if(nums[i-1]=nums[i])
        c++;
    }
    if( c==0||c==1)
    cout<<true;
    else
    cout<false;

    // for(int i=0;i<n;i++)
    // {
    //     cout<<nums[i]<<" ";
    // }
 
return 0;
}