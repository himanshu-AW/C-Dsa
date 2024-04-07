//Remove Duplicates in sorted array<vector>
#include<iostream>
#include<vector>
using namespace std;
 int remove_duplicates(vector<int> &nums)
 {
    int i,j=0;
    int n=nums.size();
    if(n==0||n==1)
    {
        return n;
    }
    for (i=0;i<n-1;i++)
    {
        if(nums[i]!=nums[i+1])
      { 
         nums[j++]=nums[i];
      }
    }
    nums[j++]=nums[i];   
   return j;
 }
int main()
{
   vector<int> nums={0,1,1,1,2,2,2,2,3,3,4,4,5,5};
  int  n=remove_duplicates(nums);
   for(int i=0;i<n;i++)
   {
    cout<<nums[i]<<" ";
   }
return 0;
} 